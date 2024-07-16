Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            // If we just encountered a dash, skip it and capitalize the next letter
            ++c;
            continue;
        }
        if (!first)
            output += std::toupper(c);
        else
            output += c;
        first = false;
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "CamelCase: " << camelCase(input) << std::endl;
    return 0;
}