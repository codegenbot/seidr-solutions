#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    for (const auto& word : s.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(word[0]);
        }
        result += word;
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << toCamelCase(s) << '\n';
    }
    return 0;
}