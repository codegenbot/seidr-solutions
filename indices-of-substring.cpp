#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty()) {
        std::cout << 0;
        return 0;
    }

    for (int i = 0; i <= static_cast<int>(text.size()) - static_cast<int>(target.size()); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}