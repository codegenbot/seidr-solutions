#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    std::string output;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            output += toupper(c);
            capitalizeNext = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input, output;

    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        output += camelCase(iss.str()) + " ";
    }
    
    // Remove the extra space
    if (!output.empty()) {
        output.pop_back();
    }

    std::cout << output;
    
    return 0;
}