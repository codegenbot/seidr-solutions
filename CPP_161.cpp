for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (std::all_of(s.begin(), s.end(), [](char c) { return !isalpha(c); })) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}