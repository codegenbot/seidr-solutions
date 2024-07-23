```c++
std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = false;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
            continue;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}