#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (const auto& word : str.split('-')) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
            result += word;
        } else {
            result = tolower(word);
        }
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'exit' to quit): ";
        std::cin >> str;
        if (str == "exit") break;
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}