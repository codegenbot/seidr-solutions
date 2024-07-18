string solve(string s){
    bool hasLetter = false;
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            hasLetter = true;
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}