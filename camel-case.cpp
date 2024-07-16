std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str + ' ') { 
        if (c == '-') {
            result += ' ';  // Add a space to separate words
            capitalize = true;  // Start new word, so capitalize next char
        } else if (capitalize) {
            if (c == ' ') {
                capitalize = false;
                continue;
            }
            result += toupper(c);  // Capitalize first letter of each word
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}