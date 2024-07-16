for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (none_of(s.begin(), s.end(), ::isalpha)) {
        reverse(s.begin(), s.end());
    }
    return s;
}