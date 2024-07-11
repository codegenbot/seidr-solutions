#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;
    std::size_t pos = -1;
    while ((pos = text.find(target, pos + 1)) != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}