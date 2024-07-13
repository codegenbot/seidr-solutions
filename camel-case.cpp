string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + 1);
            result += word;
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            result += std::tolower(s.substr(i + 1).substr(0, 1)) + s.substr(i + 1).substr(1);
            break;
        } else {
            result += s[i];
        }
    }
    return result;
}