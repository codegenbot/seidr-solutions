string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c + ('a' - 'A');
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}