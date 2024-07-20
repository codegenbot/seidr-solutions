std::string camelCase(const std::string& str) {
    std::string result = "";
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            inWord = true;
        } else {
            if (!inWord) {
                inWord = true;
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        }
    }

    return result.size() && (result[0] = toupper(result[0]), result);
}