```cpp
#include <iostream>
#include <string>
#include <cassert>

int my_strlen(std::string str) {
    int len = 0;
    for (char c : str) {
        len++;
    }
    return len;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    input.erase(input.find_last_not_of('\n') + 1);
    std::cout << "The length of '" << input << "' is: " << my_strlen(input) << "\n";
    return 0;
}