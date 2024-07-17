Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    size_t i = 0;

    while (i < str.size()) {
        if (str[i] == '-') {
            i++;
            while (i < str.size() && str[i] == '-') {
                i++;
            }
            if (i < str.size()) {
                result += std::toupper(str[i]);
                i++;
            }
        } else if (str[i] != ' ') {
            if (!result.size()) {
                result = std::string(1, std::tolower(str[i]));
            } else {
                result += std::string(1, str[i]);
            }
            i++;
        }
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