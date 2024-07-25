string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c >= 'a' && c <= 'z') {
                c = toupper(c);
            }
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(s.begin(), s.end());
    }
    return result;
}