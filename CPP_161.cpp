string solve(string s) {
    string result;
    for (char c : s) {
        if (isalpha(c)) {
            c = (islower(c))? toupper(c): tolower(c);
        }
        else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(s.begin(), s.end());
    }
    return result;
}