#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (const auto& word : str.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word;
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

std::string& split(std::string& str, char c) {
    size_t pos = 0;
    while ((pos = str.find(c)) != std::string::npos) {
        str.replace(pos, 1, " ");
        pos += 1;
    }
    return str;
}