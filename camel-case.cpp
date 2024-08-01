#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (const auto& word : str.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word;
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << "\n";
    std::cout << camelCase("two-words") << "\n";
    std::cout << camelCase("two words") << "\n";
    std::cout << camelCase("all separate words") << "\n";
    return 0;
}