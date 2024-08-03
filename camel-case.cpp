#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    for (char c : input) {
        if (c == '-') {
            output += (input[++input.find(c)] + "").substr(0, 1).toupper();
        } else if (c == ' ') {
            output += ' ';
        } else {
            output += c;
        }
    }
    return output[0] >= 'a' ? output : output[0].toupper() + output.substr(1);
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << '\n';
    }
    return 0;
}