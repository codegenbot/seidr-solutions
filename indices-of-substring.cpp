#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
        ++pos; // Move to the next character after the found target substring
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}