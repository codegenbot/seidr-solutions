for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            int j = i;
            while (j < s.size() && s[j] != ' ') {
                ++j;
            }
            sort(s.begin() + i, s.begin() + j);
            i = j;
        }
    }
    return s;
}