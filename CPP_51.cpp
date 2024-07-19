```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a string: ";
    std::string output;
    std::getline(std::cin, output);

    output = remove_vowels(output);  

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