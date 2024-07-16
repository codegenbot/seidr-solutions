#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& s) {
    std::stringstream ss(s);
    std::string word;
    std::string result;

    if (ss >> word) {
        result += word;
    }

    while (ss >> word) {
        result += toupper(word[0]);
        result += tolower(&word[1]);
    }

    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;

    return 0;
}