```cpp
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& str) {
    std::string result;
    std::stringstream ss(str);
    std::string word;

    if (ss >> word) {
        result = tolower(word);
    }

    while (ss >> word) {
        result += toupper(word[0]);
        for (size_t i = 1; i < word.size(); ++i) {
            result += tolower(word[i]);
        }
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