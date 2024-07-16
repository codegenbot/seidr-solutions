#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto& word : s.split '-') {
        if (!first)
            result += std::toupper(word[0]);
        else
            result += word;
        first = false;
    }

    return result;
}

int main() {
    while (true) {
        std::string input;
        std::cout << "Enter a string in kebab-case or 'stop' to quit: ";
        std::cin >> input;

        if (input == "stop")
            break;

        std::cout << kebabToCamelCase(input) << "\n";
    }

    return 0;
}

std::string& operator>>(std::istream& is, std::string& s) {
    std::getline(is, s);
    return is;
}