int evenCount = 0, oddCount = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        string rev = string(str.rbegin(), str.rend());
        if (str == rev) {
            if (i % 2 == 0) {
                ++evenCount;
            } else {
                ++oddCount;
            }
        }
    }
    return {evenCount, oddCount};
}