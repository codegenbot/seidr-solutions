string solve(string s){
    bool hasLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            break;
        }
    }
    if (hasLetter) {
        for (char &c : s) {
            if (isalpha(c)) {
                if (islower(c)) c = toupper(c);
                else c = tolower(c);
            }
        }
    } else {
        reverse(s.begin(), s.end());
    }
    return s;
}