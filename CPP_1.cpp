
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a) {
    std::sort(a.begin(), a.end());
    return a[0] == a[1];
}

int main() {
    std::vector<std::string> groups;
    std::string line;
    while (std::getline(std::cin, line)) {
        groups.push_back(line);
    }

    for (const auto& group : groups) {
        if (issame(group)) {
            std::cout << "true" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
    }

    return 0;
}