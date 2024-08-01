bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        for (int j = i; j < i + 3; j++) {
            for (int k = i; k < i + 3; k++) {
                if (j == k && s[j] == s[k])
                    return false;
                if (s[j] == s[k])
                    unique = false;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}