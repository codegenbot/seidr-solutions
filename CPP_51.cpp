```cpp
#include <string>
#include <cassert>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            result += c;
        }
    }
    return result;
}

assert(remove_vowels("ybcd") == "ybcd");