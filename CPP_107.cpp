vector<int> counts(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev = num;
        reverse(rev.begin(), rev.end());
        if (num == rev) {
            if (i % 2 == 0) {
                ++counts[0];
            } else {
                ++counts[1];
            }
        }
    }
    return counts;
}