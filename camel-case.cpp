```cpp
std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool inWord = false;

    for (char c : s) {
        if (c == '-') {
            inWord = false;
        } else {
            if (!inWord) {
                result += toupper(c);
                inWord = true;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}