std::string toCamelCase(const std::string& s) {
    std::string result;
    size_t pos = 0;

    while (pos < s.length()) {
        // Find the next space or dash
        size_t nextSpaceOrDash = s.find(' ', pos);
        if (nextSpaceOrDash == std::string::npos) {
            nextSpaceOrDash = s.find('-', pos);
        }

        if (nextSpaceOrDash != std::string::npos) {
            // Add the current word to the result
            for (size_t i = pos; i < nextSpaceOrDash; ++i) {
                char c = s[i];
                if (c == '-') {
                    continue;
                } else if (i == 0 || s[i-1] == '-') {
                    result += toupper(c);
                } else {
                    result += tolower(c);
                }
            }
            pos = nextSpaceOrDash + 1;
        } else {
            // Add the remaining words to the result
            for (size_t i = pos; i < s.length(); ++i) {
                char c = s[i];
                if (c == '-') {
                    continue;
                } else if (i == 0 || s[i-1] == '-') {
                    result += toupper(c);
                } else {
                    result += tolower(c);
                }
            }
            break;
        }
    }

    return result;
}