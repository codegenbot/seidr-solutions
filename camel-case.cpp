```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> parts;
    size_t pos = 0;
    while ((pos = s.find(c)) != std::string::npos) {
        parts.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    parts.push_back(s);
    return parts;
}

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> parts = split(s, '-');
    std::string result;
    for (int i = 0; i < parts.size(); i++) {
        if (!i) {
            result += tolower(parts[i]);
        } else {
            result += toupper(parts[i].at(0));
            result += tolower(string(parts[i]).substr(1));
        }
        if (i != parts.size() - 1)
            result += " ";
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "Result: " << kebabToCamel(input) << std::endl;

    return 0;
}