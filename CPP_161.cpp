for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(s.begin(), s.end());
    }
    return s;
}