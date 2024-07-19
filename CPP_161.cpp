for (char& c : s) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(s.begin(), s.end());
    }
    return s;
}