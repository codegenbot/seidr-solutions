string s = to_string(abs(num));
    vector<int> counts(2, 0);
    for (char c : s) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}