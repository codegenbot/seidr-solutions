#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty() && text.empty()) {
        indices.push_back(0);
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