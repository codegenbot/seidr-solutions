```
std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (capitalize) {
                result += ' ';  // Add a space to separate words
                capitalize = true;  // Start new word, so capitalize next char
            } else {
                result += ' ';  // Add a space to separate words
                capitalize = true;  // Start new word, so capitalize next char
            }
        } else if (capitalize) {
            result += std::toupper(c);  // Capitalize first letter of each word
            capitalize = false;
        } else {
            result += std::tolower(c);
        }
    }

    if (capitalize) {
        result += std::toupper(str[0]);  // Capitalize first letter of the string
    }

    return result;
}