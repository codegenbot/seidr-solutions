#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos < text.size()) {
        indices.push_back(static_cast<int>(pos));
        pos = text.find(target, pos + 1 - target.size() + 1);
    }

    for (int i = 0; i < static_cast<int>(indices.size()); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}