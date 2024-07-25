#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result = "";
    bool lastCharWasSpace = false;

    for(char c : text) {
        if(c == ' ') {
            if(lastCharWasSpace) {
                result += "-";
            } else {
                result += "_";
            }
            lastCharWasSpace = true;
        } else {
            result += c;
            lastCharWasSpace = false;
        }
    }

    return result;
}