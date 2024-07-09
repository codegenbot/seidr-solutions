#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> parts;
    size_t pos = 0;

    while ((pos = s.find(" ")) != std::string::npos) {
        parts.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }

    if (!s.empty()) {
        parts.push_back(s);
    }

    for (size_t i = 0; i < parts.size(); ++i) {
        std::string part = parts[i];
        if (i > 0) {
            part[0] = toupper(part[0]);
        }
        s += part;
    }

    return s;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}