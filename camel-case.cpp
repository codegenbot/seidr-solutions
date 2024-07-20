std::string camelCase(const std::string& str) {
    std::string result = "";
    bool inLowercase = true;
    bool firstWord = true;

    for (char c : str) {
        if (c == '-') {
            inLowercase = !inLowercase;
            if (!firstWord) result += ' ';
            firstWord = false;
        } else {
            result += inLowercase ? tolower(c) : toupper(c);
            inLowercase = false;
        }
    }

    return result;
}