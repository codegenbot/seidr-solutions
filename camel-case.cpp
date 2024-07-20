std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNextWord = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNextWord = true;
        } else {
            if (capitalizeNextWord) {
                result += toupper(c);
                capitalizeNextWord = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}