```cpp
std::string camelCase(const std::string& str) {
    std::string result;
    size_t pos = 0;
    bool capitalizeNext = (str[0] >= 'a' && str[0] <= 'z');
    for (const auto& c : split(str, '-')) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result += std::string(1, toupper(c[0])) + c.substr(1);
                capitalizeNext = false;
            } else {
                result += tolower(c[0]) + c.substr(1);
            }
        } else {
            if (!capitalizeNext) {
                result += c;
            } else {
                result += std::string(1, toupper(c[0])) + c.substr(1);
                capitalizeNext = false;
            }
        }
    }
    return result;
}