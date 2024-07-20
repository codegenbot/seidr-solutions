#include <string>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
           || (c >= 'A' && c <= 'U') && (c >= 'a' && c <= 'u')){
            continue;
        }
        result += c;
    }
    return result;
}