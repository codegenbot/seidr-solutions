std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNextWord = true;
    for (char c : str) {
        if (c == ' ') {
            capitalizeNextWord = true;
        } else if (capitalizeNextWord) {
            result += toupper(c);
            capitalizeNextWord = false;
        } else {
            result += tolower(c);
        }
    }
    return result;
}