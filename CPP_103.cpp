if(n > m) {
        return "-1";
    }
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = sum / (m - n + 1);
    string binary_avg = bitset<32>(avg).to_string();
    return binary_avg.substr(0, binary_avg.find_last_of("1") + 1);
}