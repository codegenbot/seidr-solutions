#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<size_t> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos && pos <= text.size() - target.size()) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}