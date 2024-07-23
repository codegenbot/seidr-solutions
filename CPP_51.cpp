#include <string>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for(char c : text){
        if(!isalpha(c) || !strchr("aeiouAEIOU", tolower(c))){
            result += c;
        }
    }
    return result;