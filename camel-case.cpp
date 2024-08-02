std::string camelCase(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first) {
                result += std::toupper(c);
            } else {
                first = false;
            }
        } else if (c == ' ') {
            continue;
        } else {
            if (!first) {
                result += std::toupper(c);
            } else {
                first = false;
                result += c;
            }
        }
    }

    return result;
}