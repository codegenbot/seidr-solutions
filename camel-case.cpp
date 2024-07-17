```cpp
std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool inWord = false;
    for (char c : s) {
        if (c == '-') {
            inWord = true;
            continue;
        }
        if (!inWord) {
            result += tolower(c);
        } else {
            result += toupper(c);
            inWord = false;
        }
    }
    return result;
}