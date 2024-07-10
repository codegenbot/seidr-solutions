```cpp
std::string camelCase(const std::string& s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (capitalizeNext) {
                result += tolower(c);
                capitalizeNext = false;
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
        }
    }

    return result;
}