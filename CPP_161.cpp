string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
        } else {
            hasLetter = true;
            result += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c);
        }
    }

    return hasLetter ? s : string(rbegin(s), rend(s));
}