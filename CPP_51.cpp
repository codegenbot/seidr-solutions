#include <string>
#include <iostream>

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::string new_result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && 
           std::tolower(c) != 'o' && std::tolower(c) != 'u'){
            new_result += c;
        }
    }
    std::cout << "String after removing vowels: " << new_result << std::endl;
    return 0;
}