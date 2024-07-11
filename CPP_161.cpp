string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
            hasLetter = false;
        } else {
            hasLetter = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        }
    }

    return hasLetter ? s : string(result.rbegin(), result.rend());
}