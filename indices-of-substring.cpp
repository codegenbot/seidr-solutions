#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::vector<int> indices;

    std::cout << "Enter the text string: ";
    std::getline(std::cin, text);

    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);

    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    std::cout << "Indices where the target appears in the text: ";
    for (int index : indices) {
        std::cout << index << " ";
    }

    return 0;
}