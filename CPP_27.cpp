#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            result += toupper(str[i]);
        } else if (isupper(str[i])) {
            result += tolower(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}