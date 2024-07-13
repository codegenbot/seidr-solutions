#include <string>

std::string camelCase(std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if(capitalize){
                result += toupper(str[str.find(c)+1]);
                capitalize = false;
            }
            result += ' ';
        } else {
            if(capitalize){
                result += toupper(c);
                capitalize = false;
            }else{
                result += tolower(c);
            }
        }
    }

    return result.substr(0, result.find(' '));
}