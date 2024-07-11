std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (!first && c == '-') {
            result += char(toupper(c));
        } else if (!first && c == ' ') {
            result += char(toupper(c));
        } else if (c == '-') {
            first = false;
        } else if (c == ' ') {
            first = false;
        } else {
            if (first) {
                result += tolower(c);
                first = false;
            } else {
                result += toupper(c);
            }
        }
    }

    return result;
}