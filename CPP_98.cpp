#include <iostream>
#include <string>

int start_here(std::string& input) {
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int count = 0;
    for (auto it = input.begin(); it != input.end(); ++it) {
        if ((input.find(*it) == std::string::npos || !isupper(*it)) && 
            (*it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U')) {
            count++;
        }
    }
    std::cout << "Number of uppercase vowels at even positions: " << count << std::endl;
    return 0;
}