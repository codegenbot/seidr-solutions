```cpp
std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            // Add nothing before the next word
            capitalize = true; // Capitalize the next character
        } else if (capitalize) {
            if (!result.empty()) {
                result += ' '; // Add a space if it's not the first word
            }
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}