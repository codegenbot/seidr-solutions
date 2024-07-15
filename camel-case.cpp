#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = {s};
    for (int i = 0; i < words.size(); ++i) {
        size_t pos = 0;
        while ((pos = words[i].find('-')) != std::string::npos) {
            words[i].replace(pos, 1, std::toupper(words[i][pos]));
        }
    }
    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::string(1, std::toupper(words[i][0]));
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;
    return 0;
}