#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(!strchr("aeiouAEIOU",tolower(c))->operator[](0) == 'a' && !strchr("aeiouAEIOU",tolower(c))->operator[](0) == 'e' && !strchr("aeiouAEIOU",tolower(c))->operator[](0) == 'i' && !strchr("aeiouAEIOU",tolower(c))->operator[](0) == 'o' && !strchr("aeiouAEIOU",tolower(c))->operator[](0) == 'u')
            result += c;
    }
    return result;
}