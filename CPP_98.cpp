#include <iostream>
#include <string>

int start_here() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int count = 0; 
    for (char c : input) {
        if ((input.find(c) % 2 == 0 && std::isupper(c)) && (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            count++;
        }
    }
    std::cout << "Number of uppercase vowels at even positions: " << count << std::endl;
    return 0;
}