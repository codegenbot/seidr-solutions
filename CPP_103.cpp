if (n > m)
        return "-1";

    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }

    int avg = round(sum / (m - n + 1));
    string binary_avg = bitset<sizeof(int) * 8>(avg).to_string();
    binary_avg.erase(0, binary_avg.find_first_of('1'));

    return binary_avg;
}