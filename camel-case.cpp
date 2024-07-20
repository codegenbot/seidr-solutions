```cpp
std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else if (c != ' ') {
            result += tolower(c);
        }
        result += c; 
    }

    return result;
}