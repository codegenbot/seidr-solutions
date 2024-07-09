std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c + ('a' - 'A'));
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(result.begin(), result.end());
    }
    return result;
}