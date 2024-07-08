#include <iostream>
#include <string>

std::string find_substrings(const std::string& str) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find("is")) != std::string::npos) {
        count++;
        pos = str.find("is", pos + 1);
    }

    return "The substring 'is' appears " + std::to_string(count) + " times in the input.\n";
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << find_substrings(input) << "\n";

    return 0;
}