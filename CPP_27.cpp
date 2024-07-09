#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++) {
        char c = str[i];
        if(c>=97&&c<=122)
            result += (char)(c-32);
        else
            result += (char)(c+32);
    }
    return result;
}