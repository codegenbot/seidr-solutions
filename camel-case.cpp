std::string camelCase(const std::string& str) {
    std::string result;
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            inWord = true;
            result += ' ';
        } else {
            if (!inWord) {
                result += tolower(c);
                inWord = true;
            } else {
                result += toupper(c);
            }
        }
    }

    return result;
}