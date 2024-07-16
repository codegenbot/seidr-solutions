#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<std::size_t> indices;
    for (std::size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.compare(i, target.size(), target) == 0)
            indices.push_back(i);
    }

    for (std::size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}