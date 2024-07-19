#include <iostream>
#include <string>
#include <cctype>

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    bool correct = (flip_case(input) == "these violent delights have violent ends");
    std::cout << flip_case(input) << std::endl;
    return correct ? 0 : 1;
}

std::string flip_case(const std::string& str) {
    for (char c : str) result += c;
    return result;
}