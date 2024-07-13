```cpp
std::string camelCase(std::string str) {
    std::string result = ""; // Initialize the result string.
    bool isNextUpper = false;
    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper && c != '-') {
                result += std::toupper(c);
                isNextUpper = true;
            } else if (c == '-') {
                continue;
            }
            if (c == ' ') {
                result += ' ';
                isNextUpper = false;
            }
        } else {
            if (!isNextUpper) {
                result += c;
                isNextUpper = true;
            } else {
                result += std::tolower(c);
            }
        }
    }
    return result;
}