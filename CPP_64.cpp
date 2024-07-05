int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int len = s.length();
    for (int i = 0; i < len; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            ++count;
        }
    }
    if (len > 0 && s[len - 1] == 'y') {
        ++count;
    }
    return count;
}