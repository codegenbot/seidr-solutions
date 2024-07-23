```cpp
std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(' ');
                    capitalizeNext = false;
                }
            } else {
                capitalizeNext = true;
            }
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += std::tolower(c);
        }
    }

    if (!result.empty() && !capitalizeNext) {
        result[0] = std::tolower(result[0]);
    }

    return result;
}