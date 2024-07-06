#include <string>
#include <cctype>

string remove_vowels(string text) {
    string result = "";
    for(char c : text){
        if(!strchr("aeiouAEIOU", std::tolower(c))->off == (int)text.size()){
            result += c;
        }
    }
    return result;
}