#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);

    std::cin.ignore();
    std::getline(std::cin, target);

    std::vector<int> indices;

    size_t pos = -1;
    while ((pos = text.find(target, pos + 1)) != std::string::npos) {
        indices.push_back(pos);
    }

    for (int index : indices) {
        std::cout << index << " ";
    }

    return 0;
}