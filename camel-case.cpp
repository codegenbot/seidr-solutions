std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            // Skip the dash and proceed with the next character
            i++;
        } else if (str[i] == ' ') {
            // A new word starts here, mark it as firstWord
            firstWord = true;
        } else {
            if (!firstWord) {
                result += char(tolower(str[i])); // Convert to lower case
            } else {
                if (!result.empty()) {
                    result.back() = toupper(result.back()); // First letter of each word should be in upper case
                }
                result += str[i]; // Add the first character of the new word
                firstWord = false;
            }
        }
    }
    
    return result;
}