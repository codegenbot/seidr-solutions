if (n > m) {
    return "-1";
}

int sum = 0;
for (int i = n; i <= m; ++i) {
    sum += i;
}

int avg = round(sum / (m - n + 1.0));
string binary_avg = bitset<32>(avg).to_string();
size_t pos = binary_avg.find('1');
if (pos != string::npos) {
    return binary_avg.substr(pos);
}

return "0";
}