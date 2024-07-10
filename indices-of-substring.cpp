#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    size_t pos = text.find(target, 0);
    std::vector<int> indices;
    
    if (target.empty()) {
        for (size_t i = 0; i < text.length(); ++i) {
            std::cout << i << " ";
        }
        return 0;
    }

    while (pos != std::string::npos && pos < text.size()) {
        indices.push_back(static_cast<int>(pos));
        pos = text.find(target, pos + 1);
    }
    
    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}