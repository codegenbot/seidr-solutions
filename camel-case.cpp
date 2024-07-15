#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;

    for (char c : input) {
        if (c == '-') {
            continue;
        }
        else if (c == ' ') {
            output += " ";
        } else {
            output += toupper(c);
        }
    }

    // Convert first letter to lower
    if (!output.empty()) {
        for (char &c : output) {
            c = tolower(c);
        }
        // Make first character of the string uppercase
        output[0] = toupper(output[0]);
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}