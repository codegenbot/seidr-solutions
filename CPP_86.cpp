for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            continue;
        }
        size_t j = i;
        while (j < s.size() && s[j] != ' ') {
            ++j;
        }
        sort(s.begin() + i, s.begin() + j);
        i = j - 1;
    }
    return s;
}