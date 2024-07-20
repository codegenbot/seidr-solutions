#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t end = 0; end <= input.size(); ++end) {
        if (end == input.size() || input[end] == ' ') {
            words.push_back(input.substr(start, end - start));
            start = end + 1;
        }
    }

    std::string output;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) {
            output += std::toupper(words[i][0]);
            output += words[i].substr(1);
        } else {
            output += words[i];
        }
    }

    return output;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << '\n';
    }
    return 0;
}