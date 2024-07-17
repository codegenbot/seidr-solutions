#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0;

    while ((pos = str.find(" ")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    if (!str.empty()) {
        words.push_back(str);
    }

    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            words[i][0] = toupper(words[i][0]);
    }

    std::string result;
    for (const auto& word : words) {
        result += word;
        if (i + 1 < words.size()) {
            result += " ";
        }
        ++i;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}