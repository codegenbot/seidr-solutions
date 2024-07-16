string solve(string s){
    bool hasLetter = false;
    for (char &c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}