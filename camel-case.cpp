std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-' && str.length() > 1 && str[0] != '-') { 
            result += ' '; 
            capitalize = true; 
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    result.erase(0, result.find_first_of(' ') + 1); 
    return result;
}