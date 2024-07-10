for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {
            int start = i;
            while (i < s.size() && isalpha(s[i])) {
                ++i;
            }
            sort(s.begin() + start, s.begin() + i);
        }
    }
    return s;
}