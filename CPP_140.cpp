```cpp
#include <iostream>
#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || (i > 0 && result.back() != ' ') || i < text.length()-1 && text[i+1] != ' ')){
            result += '_';
        } else {
            result += text[i];
        }
    }
    return result;
}