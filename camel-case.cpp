#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            result += ' '; 
            capitalize = true; 
        } else {
            result += capitalize ? std::toupper(c) : std::tolower(c);
            capitalize = false; 
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}