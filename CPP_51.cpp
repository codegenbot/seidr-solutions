#include <string>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
           !isupper(c) && !islower(c))
            result += c;
    }
    return result;
}