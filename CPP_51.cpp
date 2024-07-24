#include <iostream>
#include <string>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(toupper(c) != 'A' && toupper(c) != 'E' && toupper(c) != 'I' && toupper(c) != 'O' && toupper(c) != 'U'){
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::cout << remove_vowels("Hello World"); 
    return 0;
}