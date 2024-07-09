#include <string>
#include <cctype>

std::string filp_case(std::string str) {
    char c;
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;
}