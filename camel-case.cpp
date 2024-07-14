#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> groups;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        if (!word.empty()) {
            groups.push_back(word);
        }
    }

    std::string result = "";
    for (const auto& group : groups) {
        result += toupper(group[0]);
        result += std::string(1, group.substr(1));
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}