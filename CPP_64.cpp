```cpp
#include <iostream>
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            || (c == 'y' && (int)s.find('y') != std::string::npos)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    std::string input;
    try {
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            throw std::runtime_error("Input cannot be empty.");
        }
        int result = vowels_count(input);
        std::cout << "Number of vowels in the string is: " << result << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}