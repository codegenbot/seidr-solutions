#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    if (text.empty() || target.empty() || text.size() < target.size()) {
        std::cout << "0";
        return 0;
    }

    std::vector<int> indices;

    for (size_t i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(static_cast<int>(i));
        }
    }

    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}