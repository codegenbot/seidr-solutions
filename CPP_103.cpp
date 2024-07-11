if (n > m) {
    return "-1";
}

int sum = 0;
int count = m - n + 1;
for (int i = n; i <= m; i++) {
    sum += i;
}

int avg = round((double)sum / count);
string binary_avg = bitset<32>(avg).to_string();

return binary_avg.substr(binary_avg.find('1'));
}