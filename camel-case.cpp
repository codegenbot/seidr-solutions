#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& str) {
    std::string result;
    std::stringstream ss(str);
    std::string word;

    if (ss >> word) {
        for (char& c : word) {
            c = toupper(c);
        }
        result = word;
    }

    while (ss >> word) {
        for (char& c : word) {
            c = tolower(c);
        }
        result += std::string("").append(word).substr(0, 1).toupper() + word.substr(1);
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