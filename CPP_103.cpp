if (n > m) {
    return "-1";
}
int sum = 0;

for (int i = n; i <= m; i++) {
    sum += i;
}

int avg = round(sum / (m - n + 1.0));
string binary = bitset<32>(avg).to_string();
int index = binary.find("1");
return binary.substr(index);
}