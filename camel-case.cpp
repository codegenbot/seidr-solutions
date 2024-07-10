Here is the solution:

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
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << '\n';
    }
    return 0;
}