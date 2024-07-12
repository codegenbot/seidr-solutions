#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalizeNext = false;
    for (char& c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            c = std::toupper(c);
            capitalizeNext = false;
        }
    }

    std::cout << input << std::endl;

    return 0;
}