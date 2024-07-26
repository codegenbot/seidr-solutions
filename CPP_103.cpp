if (n > m) {
    return "-1";
} else {
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = round(sum / (m - n + 1.0));
    return bitset<32>(avg).to_string().substr(0, 32 - __builtin_clz(avg));
}