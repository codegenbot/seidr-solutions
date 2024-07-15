Here is the solution:

#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            if (!first) {
                output.push_back(char(toupper(c)));
            }
            first = false;
        } else if (c == ' ') {
            first = true;
        } else {
            output.push_back(char(tolower(c)));
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;

    return 0;
}