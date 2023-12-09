#include <iostream>
#include <string>
#include <cstring>

int insertCharacter(std::string input) {
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Length of the string is: " << input.size() << std::endl;

    // Insert a character at the beginning of the string
    input.insert(input.begin(), 'a');

    return 0;
}