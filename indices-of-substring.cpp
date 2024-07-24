#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);

    std::cin.ignore();
    std::getline(std::cin, target);

    std::vector<int> indices;

    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = pos + 1; // Increment the position by 1
        pos = text.find(target, pos); // Search from the next character
    }

    for (int index : indices) {
        std::cout << index << " ";
    }

    return 0;
}