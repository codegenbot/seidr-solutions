```
#include <iostream>
#include <string>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u')
            result += c;
    }
    return result;
}

int main() {
    std::cout << remove_vowels("ybcd") << std::endl;
    return 0;
}