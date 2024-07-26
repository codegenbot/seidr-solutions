int n = s.size();
    bool has_letter = false;
    for (int i = 0; i < n; ++i) {
        if (isalpha(s[i])) {
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            has_letter = true;
        }
    }
    if (!has_letter) {
        reverse(s.begin(), s.end());
    }
    return s;
}