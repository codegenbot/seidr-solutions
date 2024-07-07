```cpp
#include <iostream>
#include <string>

int is_bored(std::string S) {
    size_t pos = 0;
    while ((pos = S.find(' ', pos)) != std::string::npos) {
        if (S.substr(0, pos).compare("I am bored") == 0) {
            return 1; 
        }
        pos++;
    }
    return 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = is_bored(input);
    std::cout << "The count of 'I am bored' in your string is: " << result << std::endl;
    return 0;
}