#include <string>

std::string camelCase(std::string inputString) {
    if (inputString[0] == '-') inputString.erase(0,1); 
    std::string result = "";
    int i = 0;
    while (i < inputString.length()) {
        if (inputString[i] == '-') {
            i++;
            while (i < inputString.length() && inputString[i] != ' ') {
                if (!result.empty()) {
                    result += tolower(inputString[i]);
                } else {
                    result += toupper(inputString[i]);
                }
                i++;
            }
        } else {
            if (result.empty()) {
                result += toupper(inputString[i]);
            } else {
                result += tolower(inputString[i]);
            }
        }
    }
    return result;
}