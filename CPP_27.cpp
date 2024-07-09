#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++) {
        char c = str[i];
        if(isupper(c)) {
            result += tolower(c);
        } else {
            result += toupper(c);
        }
    }
    return result;
}