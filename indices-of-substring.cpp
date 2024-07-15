#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty()) {
        for (int i = 0; i < static_cast<int>(text.size()); ++i) {
            indices.push_back(i);
        }
    } else {
        int pos = static_cast<int>(text.find(target, 0));
        while (pos < static_cast<int>(text.size())) {
            indices.push_back(pos);
            pos = static_cast<int>(text.find(target, pos + 1));
        }
    }

    for (int i = 0; i < static_cast<int>(indices.size()); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}