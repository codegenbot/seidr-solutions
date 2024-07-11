string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
        } else {
            hasLetter = true;
            result += (islower(c) ? toupper(c) : tolower(c));
        }
    }

    return hasLetter ? result : string(rbegin(s), rend(s));
}