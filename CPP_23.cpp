#include <iostream>
#include <string>
#include <cassert>
#include <cstring>

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
    assert(my_strlen(input) == my_strlen("asdasnakj"));
    std::cout << "The length of '" << input << "' is: " << my_strlen(input) << "\n";
    return 0;
}