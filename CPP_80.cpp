bool is_happy(const string& s) {
    if (s.length() < 3) return false;
    for (int idx = 0; idx < s.length() - 2; idx++) {
        if (s[idx] == s[idx + 1] || s[idx] == s[idx + 2] || s[idx + 1] == s[idx + 2]) {
            return false;
        }
    }
    return true;
}