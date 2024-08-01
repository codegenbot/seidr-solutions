Here is the solution:

#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result = "";
    for (const auto& word : s.split(" ")) {
        for (size_t i = 0; i < word.size(); ++i) {
            if (i > 0) {
                result += toupper(word[i]);
            } else {
                result += tolower(word[0]);
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << toCamelCase(s) << std::endl;
    }
    return 0;
}
