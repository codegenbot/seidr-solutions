string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}