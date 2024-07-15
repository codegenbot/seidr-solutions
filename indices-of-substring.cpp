#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    if (target.empty() || text.empty()) {
        return 0;
    }

    std::vector<int> indices;

    if (target.empty()) {
        for (int i = 0; i < static_cast<int>(text.size()); ++i) {
            indices.push_back(i);
        }
    } else {
        size_t pos = text.find(target, 0);
        while (pos != std::string::npos) {
            indices.push_back(static_cast<int>(pos));
            pos = text.find(target, pos + 1);
        }
    }

    for (int i = 0; i < static_cast<int>(indices.size()); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}