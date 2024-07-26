string result = s;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            sort(result.begin() + start, result.begin() + i);
            start = i + 1;
        }
    }
    return result;
}