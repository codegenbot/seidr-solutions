bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        for (int j = i; j < i + 3; j++) {
            for (int k = j + 1; k <= i + 2; k++) {
                if (s[j] == s[k])
                    unique = false;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}