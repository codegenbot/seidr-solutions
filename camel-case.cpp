std::string camelCase(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : str + " ") {  
        if (c == ' ') {
            continue;  
        }
        if (c == '-') {
            capitalizeNext = true;  
            continue;
        }
        if (capitalizeNext) {
            result += char(std::toupper(c));
            capitalizeNext = false;  
        } else {
            result += c;
        }
    }
    
    return result;
}