bool same_chars(string s0, string s1) {
    int len = min(s0.size(), s1.size());
    for (int i = 0; i < len; i++) {
        if (s0[i] != s1[i]) return false;
    }
    return s0.size() == s1.size();
}