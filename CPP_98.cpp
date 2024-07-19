#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i % 2 == 0 && static_cast<char>(input[i]) >= 'A' && static_cast<char>(input[i]) <= 'U')) {
            count++;
        }
    }
    std::cout << "Number of uppercase vowels at even positions: " << count << std::endl;
    return 0;
}