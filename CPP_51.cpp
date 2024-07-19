#include <iostream>
#include <string>

std::string remove_vowels(std::string input);
bool isVowel(char c);

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::string output = remove_vowels(input);  

    std::cout << "String after removing vowels: " << output << std::endl;
    return 0;
}

std::string remove_vowels(std::string input) {
    std::string result;
    for(char c : input){
        if(!isVowel(c)) {
            result += tolower(c); 
        }
    }
    return result;
}

bool isVowel(char c) {
    std::string vowels = "aeiouAEIOU";
    return vowels.find(std::tolower(c)) != std::string::npos;
}