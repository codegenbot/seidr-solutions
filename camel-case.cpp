```cpp
std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalize) {
                result += toupper(s[++i] - '0');
                capitalize = false;
            } else {
                result += ' ';
                capitalize = true;
            }
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}