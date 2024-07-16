#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> parts = {""};
    for (char c : str) {
        if (c == '-') {
            parts.push_back("");
        } else {
            parts.back() += c;
        }
    }

    std::string result = "";
    for (int i = 0; i < parts.size(); i++) {
        if (!result.empty()) {
            result[0] -= 32; // Convert to uppercase
        }
        result += parts[i];
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}