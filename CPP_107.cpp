vector<int> counts = {0, 0};
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        if (s == rev_s) {
            if (i % 2 == 0) {
                counts[0]++;
            } else {
                counts[1]++;
            }
        }
    }
    return counts;
}