```cpp
#include <string>
#include <cassert>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){  
        if(std::tolower(c) != 'a' && std::tolower(c) != 'e' && 
           std::tolower(c) != 'i' && std::tolower(c) != 'o' && 
           std::tolower(c) != 'u'){  
            result += c;  
        }
    }
    return result;
}

int main() {  
   assert(remove_vowels("ybcd") == "ybcd");
   return 0;
}