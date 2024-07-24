#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool first = true;

    for (const auto& word : input.split("-")) {
        if (!first) {
            output += std::char_traits<char>::toctype(std::toupper(word[0]));
        } else {
            first = false;
        }
        output += word;
    }

    return output;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}