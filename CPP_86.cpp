string swap_chars(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i += 2) {
        if (i + 1 < s.size()) {
            result += s[i + 1];
        }
        result += s[i];
    }
    return result;
}