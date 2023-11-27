#include <string>
#include <cassert>
#include <cctype>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i = 0; i < str.length(); i++) {
        if(std::islower(str[i])) {
            result += std::toupper(str[i]);
        }
        else if(std::isupper(str[i])) {
            result += std::tolower(str[i]);
        }
        else {
            result += str[i];
        }
    }
    return result;
}