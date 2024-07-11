#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    if (!(std::getline(std::cin, text) && std::getline(std::cin, target))) {
        std::cerr << "Error reading input." << std::endl;
        return 1;
    }

    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1 - target.size());
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}