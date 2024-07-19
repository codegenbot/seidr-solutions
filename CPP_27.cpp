```cpp
#include <iostream>
#include <string>

std::string flipCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = flipCase(input);
    std::cout << output << std::endl;
    return 0; 
}