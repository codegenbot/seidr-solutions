#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (const auto& word : str.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}