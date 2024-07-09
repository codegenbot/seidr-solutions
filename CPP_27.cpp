#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = str;  
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            result[i] = toupper(ch);
        else if(ch >= 'A' && ch <= 'Z')
            result[i] = tolower(ch);
    }
    return result;
}