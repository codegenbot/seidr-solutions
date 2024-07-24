std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            if (isupper(c)) {
                result += c;
                capitalizeNext = true;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}