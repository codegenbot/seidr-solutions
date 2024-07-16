std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (!isalnum(c)) {  
            if (c == '-') {
                continue; // Skip '-'
            }
            if (c == ' ') {
                capitalize = true;  // Reset capitalization for next word
                continue;
            } 
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}