#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> parts;
    size_t start = 0;

    while (start < str.size()) {
        if (str[start] == '-') {
            size_t end = start + 1;
            while (end < str.size() && str[end] != '-') {
                end++;
            }
            parts.push_back(str.substr(start + 1, end - start - 1));
            start = end;
        } else {
            if (!parts.empty()) {
                parts.back().insert(0, 1, std::toupper(str[start]));
                start++;
                while (start < str.size() && str[start] != '-') {
                    start++;
                }
            } else {
                start++;
            }
        }
    }

    if (!parts.empty()) {
        parts[0][0] = std::toupper(parts[0][0]);
    }

    return std::string();
}

int main() {
    std::cout << "Enter a string: ";
    std::string str;
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;
    return 0;
}