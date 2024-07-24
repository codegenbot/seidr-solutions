```cpp
#include <iostream>
#include <string>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(int i=0; i<text.length();i++){
        if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' 
           && tolower(text[i]) != 'a' && tolower(text[i]) != 'e' && tolower(text[i]) != 'i' 
           && tolower(text[i]) != 'o' && tolower(text[i]) != 'u'){
            result += text[i];
        }
    }
    return result;
}