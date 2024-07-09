#include <string>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(int i=0; i<text.length(); i++){
        char c = tolower(text[i]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
            result += text[i];
        }
    }
    return result;
}