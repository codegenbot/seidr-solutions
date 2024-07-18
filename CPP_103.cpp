if (n > m) {
    return "-1";
}
int sum = 0;
for (int i = n; i <= m; ++i) {
    sum += i;
}
int avg = round(sum / static_cast<double>(m - n + 1));
string binary = bitset<numeric_limits<int>::digits>(avg).to_string();
return binary.substr(0, binary.find_last_of("1") + 1);
}