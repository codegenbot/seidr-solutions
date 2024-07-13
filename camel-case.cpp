#include <string>

std::string camelCase(std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true; // Capitalize the next character
        } else {
            if(capitalize){
                result += toupper(c);
                capitalize = false;
            }else{
                result += tolower(c);
            }
        }
    }

    return result;
}