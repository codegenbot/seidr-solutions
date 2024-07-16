std::string camelCase(std::string s) {
    std::string result;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || (s[i] == '-' && i > 0)) {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            size_t j = i + 1;
            while (j <= s.size() && s[j] != '-') {
                result += tolower(s[j++]);
            }
        } else {
            result += s[i];
        }
    }
    return result;
}