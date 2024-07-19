```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(std::string& str) {
    std::string result = "";  
    for (char c : str) {
        if (std::isupper(c)) {
            result += std::tolower(c);
        } else if (std::islower(c)) {
            result += std::toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    input = flip_case(input); // Corrected here
    bool correct = (input == "these violent delights have violent ends");
    std::cout << input << std::endl;
    return correct ? 0 : 1;
}