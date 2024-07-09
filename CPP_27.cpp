#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z')) {
            result += (char)(c - 32); 
        } else if ((c >= 'A' && c <= 'Z')) {
            result += (char)(c + 32);
        } else {
            result += c;
        }
    }
    return result;
}