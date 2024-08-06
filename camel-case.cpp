#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back() += c;
        } else if (c == ' ') {
            words.push_back("");
        } else {
            words.back() += c;
        }
    }
    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += words[i];
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