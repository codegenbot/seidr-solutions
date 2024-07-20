```cpp
std::string camelCase(std::string str) {
    std::string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '-') {
            i++; // skip hyphen
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += str.substr(i, str.find(' ', i) - i);
            i = str.find(' ', i); // move to next group or end of string
            if (i == std::string::npos) break;
        }
    }
    return result;
}