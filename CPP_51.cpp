#include <string>
#include <cctype>

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(std::strchr("aeiouAEIOU",std::tolower(c)) == NULL)
            result += c;
    }
    return result;
}