std::string camelCase(std::string s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else {
            if (first) {
                result += c;
            } else {
                result += char(tolower(c));
            }
            first = !first;
        }
    }

    return result;
}