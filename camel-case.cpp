Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            // skip the hyphen
            continue;
        }
        if (first) {
            output += c;
            first = false;
        } else {
            output[0] = toupper(output[0]);
            output.insert(1, 1, c);
        }
    }

    return output;
}

int main() {
    std::string input;
    while (std::cout << "input: ") {
        std::cin >> input;
        std::cout << "output: " << camelCase(input) << std::endl;
    }
    return 0;
}