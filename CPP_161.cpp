string solve(string s) {
    string result;
    for (char c : s) {
        if (isalpha(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(result.begin(), result.end());
    }
    return result;
}