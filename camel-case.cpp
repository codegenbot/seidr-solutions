std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result += ' ';
            capitalize = true; // Capitalize the next character
        } else {
            result += (capitalize ? toupper(c) : tolower(c));
            capitalize = false;
        }
    }

    return result;
}