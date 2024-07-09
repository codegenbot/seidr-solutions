#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            result += toupper((char)ch);
        else if(ch >= 'A' && ch <= 'Z')
            result += tolower((char)ch);
        else
            result += ch;
    }
    return result;
}