for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') {
            size_t wordStart = i;
            while (i < s.length() && s[i] != ' ') {
                ++i;
            }
            sort(s.begin() + wordStart, s.begin() + i);
        }
    }
    return s;
}