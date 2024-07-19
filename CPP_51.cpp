```cpp
#include <iostream>
#include <string>

std::string remove_vowels(std::string input) {
    std::string result;
    for(char c : input){
        if(std::string{"aeiou"}.find(std::tolower(c)) == std::string::npos){
            result += std::tolower(c);
        }
    }
    return result;

}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}