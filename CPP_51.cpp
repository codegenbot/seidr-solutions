```cpp
#include <string>
#include <iostream>
#include <cstring>

std::string remove_vowels(std::string str) {
    std::string new_str;
    for(char c : str){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
           std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && 
           std::tolower(c) != 'o' && std::tolower(c) != 'u'){
            new_str += c;
        }
    }
    return new_str;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::string new_result = remove_vowels(text);  
    if (!new_result.empty()) {
        std::cout << "String after removing vowels: " << new_result << std::endl;
    }
    return 0;
}