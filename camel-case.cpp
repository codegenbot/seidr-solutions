Here is the solution:

#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == '-') {
            size_t len = i - start;
            if (len > 0) {
                result += std::string(1, toupper(str[start + len - 1])) + std::string(len - 1, tolower);
            }
            start = i + 1;
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