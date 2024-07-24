#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string result;
    bool capitalize = false;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else {
            result += capitalize ? toupper(c) : c;
            capitalize = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    getline(std::cin, input);
    
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}