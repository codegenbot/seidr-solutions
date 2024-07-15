vector<int> count(2, 0);
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                count[0]++;
            } else {
                count[1]++;
            }
        }
    }
    return count;
}