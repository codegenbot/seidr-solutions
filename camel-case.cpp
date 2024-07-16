std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str + ' ') { 
        if (c == '-') {
            result += ' ';  
            capitalize = true;  
        } else if (capitalize) {
            if (c == ' ') {
                capitalize = false;
                continue;
            }
            result += toupper(c);  
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}