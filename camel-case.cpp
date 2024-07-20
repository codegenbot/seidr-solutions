std::string camelCase(const std::string& str) {
    std::string result = "";
    bool firstWord = true;

    for (char c : str) {
        if (c == '-') {
            if (!firstWord) { 
                result += ' ';
                result += toupper(str[str.find(c) + 1]);
            }
            firstWord = false;
        } else {
            if (!firstWord) { 
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            firstWord = false; 
        }
    }

    return result;
}