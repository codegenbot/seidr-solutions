std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;

    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += c;
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += std::toupper(c);
            }
            first = true;
        } else {
            if (first) {
                result += std::tolower(c);
                first = false;
            } else {
                result += c;
            }
        }
    }

    return result;
}