```cpp
#include <iostream>
#include <string>
#include <cctype>

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input; 
    bool correct = (flip_case(input) == "these violent delights have violent ends");
    std::cout << flip_case(input) << std::endl;
    return correct ? 0 : 1;
}

std::string flip_case(const std::string& str) {
    std::string result = ""; // Initialize the string
    for (char c : str) {
        if (std::isupper(c)) result += std::tolower(c);
        else if (std::islower(c)) result += std::toupper(c);
        else result += c;
    }
    return result;
}