#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(!std::isvowel(c))
            result += c;
    }
    return result;
}

bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}