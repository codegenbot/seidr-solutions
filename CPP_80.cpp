bool is_happy(string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool unique = true;
        for (char c : sub) {
            if (count(sub.begin(), sub.end(), c) > 1) {
                unique = false;
                break;
            }
        }
        if (!unique) return false;
    }
    return true;
}