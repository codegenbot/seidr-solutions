#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            result += ' '; // Add a space after each '-'
            capitalize = true; // Start the next group with capitalization
        } else {
            result += capitalize ? std::toupper(c) : std::tolower(c);
            capitalize = false; // Turn off capitalization within groups
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