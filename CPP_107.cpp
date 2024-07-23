vector<int> counts(2, 0);
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                counts[0]++;
            } else {
                counts[1]++;
            }
        }
    }
    return counts;
}