string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c + ('a' - 'A');
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(s.begin(), s.end());
    }
    return s;
}