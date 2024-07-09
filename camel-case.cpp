```std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = true;
        } else {
            if (!first) {
                result += tolower(c);
            } else {
                result += toupper(c);
                first = false;
            }
        }
    }

    return result;
}``