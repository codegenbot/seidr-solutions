int n = s.length();
    bool hasLetters = false;
    for (int i = 0; i < n; ++i) {
        if (isalpha(s[i])) {
            hasLetters = true;
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    if (!hasLetters) {
        reverse(s.begin(), s.end());
    }
    return s;
}