string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? char(c - 32) : char(c + 32);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}