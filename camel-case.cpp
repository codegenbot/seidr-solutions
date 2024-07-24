```cpp
#include <string>

std::string camelCase(std::string inputString) {
    if (inputString[0] == '-') i++; 
    std::string result = "";
    int i = 0;
    for (; i < inputString.length(); i++) {
        if (inputString[i] == '-') {
            i++;
            while (i < inputString.length() && inputString[i] != ' ') {
                result += toupper(inputString[i]);
                i++;
            }
            if (i < inputString.length()) {
                result += tolower(inputString[i++]);
            }
        } else {
            result += tolower(inputString[i]);
        }
    }
    return result;
}