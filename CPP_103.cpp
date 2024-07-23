if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }

    int avg = round((double)sum / (m - n + 1));
    string binary = bitset<32>(avg).to_string();
    return binary.substr(binary.find('1'));
}