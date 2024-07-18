if (n > m) {
    return "-1";
}

int sum = 0;
for (int i = n; i <= m; i++) {
    sum += i;
}

int avg = round((double)sum / (m - n + 1));
string binary = bitset<32>(avg).to_string();
size_t pos = binary.find('1');
if (pos != string::npos) {
    return binary.substr(pos);
}
return "0";
}