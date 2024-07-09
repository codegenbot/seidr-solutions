#include <iostream>
#include <string>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            result += toupper(c);
        }
    }
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::cout << "After removing vowels: " << remove_vowels(text) << std::endl;
}