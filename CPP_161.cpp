string solve(string s) {
    string result = "";
    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
        } else {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        }
    }
    return result.empty() ? string(s).reverse() : result;
}