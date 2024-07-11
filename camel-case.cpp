#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (const auto& word : s.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;
    return 0;
}