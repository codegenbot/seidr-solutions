string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c - ('A' - 'a');
        } else if (result.empty()) {
            result = "";
        } else {
            result += c;
        }
    }
    return result.empty() ? string(1, s.back()).append(result) : result;
}