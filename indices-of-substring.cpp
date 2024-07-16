#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<size_t> indices;
    for (size_t i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.compare(i, target.size(), target) == 0) {
            indices.push_back(i);
        }
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}