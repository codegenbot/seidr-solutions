```cpp
#include <iostream>
#include <string>

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
        if(std::string{"aeiou"}.find(std::tolower(c)) == std::string::npos){
            result += std::tolower(c);
        }
    }
    return result;
}