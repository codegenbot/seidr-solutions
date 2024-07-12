```cpp
#include <iostream>
#include <string>

std::string encrypt(const std::string& s) {
    for (char c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
    }
    return s;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << encrypt(input) << std::endl;
    return 0;
}