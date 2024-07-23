Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output = "";
    for (char c : input) {
        if (c == '-') {
            output += c;
            continue;
        }
        if (output.back() == ' ') {
            output[output.size() - 1] = toupper(output[output.size() - 1]);
        } else {
            output += tolower(c);
        }
    }
    return output;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}