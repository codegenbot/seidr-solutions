for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') {
            int start = i;
            while (i < s.length() && s[i] != ' ') {
                ++i;
            }
            sort(s.begin() + start, s.begin() + i);
        }
    }
    return s;
}