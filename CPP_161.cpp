string solve(string s) {
    string result = "";
    for (char c : s) {
        if (!isalnum(c)) {
            result += c;
        } else {
            result += (c >= 'a' && c <= 'z') ? char(c - ('z' - 'Z')) : char(c + ('A' - 'a'));
        }
    }
    reverse(result.begin(), result.end());
    return result;
}