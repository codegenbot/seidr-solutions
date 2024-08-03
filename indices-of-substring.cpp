#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos += 1; // Increment by 1 for overlapping matches
    }

    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}