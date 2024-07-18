string solve(string s) {
    bool hasLetter = false;
    for (char& c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}