#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> indices;
    std::string text, target;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);

    size_t pos = 0;
    while ((pos = text.find(target)) != std::string::npos) {
        indices.push_back(pos);
        text.erase(0, pos + target.length());
    }

    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}