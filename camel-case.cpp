#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> parts;
    while (str.find("-") != std::string::npos) {
        size_t pos = str.find("-");
        parts.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    if (!str.empty())
        parts.push_back(str);

    std::string result;
    for (int i = 0; i < parts.size(); ++i) {
        if (i > 0)
            result += std::toupper(parts[i][0]);
        else
            result += parts[i];
        if (i < parts.size() - 1)
            result += parts[i + 1].substr(0, 1);
    }
    return result;
}

int main() {
    while(true) {
        std::string input;
        std::cin >> input;
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}