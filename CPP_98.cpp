```cpp
#include <iostream>
#include <string>

int start_here(std::string& input) {
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i % 2 == 0 && isupper(input.at(i))) && (input.at(i) == 'A' || input.at(i) == 'E' || input.at(i) == 'I' || input.at(i) == 'O' || input.at(i) == 'U')) {
            count++;
        }
    }
    std::cout << "Number of uppercase vowels at even positions: " << count << std::endl;
    return 0;
}