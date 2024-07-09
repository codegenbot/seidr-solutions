bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i < s.length() - 2; i++) {
        bool unique = true;
        string sub = s.substr(i, 3);
        for (char c : sub) {
            if (count(sub.begin(), sub.end(), c) > 1) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}