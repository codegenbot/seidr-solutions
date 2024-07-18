if (n > m) {
        return "-1";
    }
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = round(sum / (m - n + 1));
    string binary_avg = bitset<32>(avg).to_string();
    int pos = binary_avg.find('1');
    return binary_avg.substr(pos);
}