#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<std::size_t> indices;
    std::size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos++;
    }
    
    for (std::size_t i = 0; i < indices.size(); ++i) {
        std::cout << std::dec << indices[i] << " ";
    }
    
    return 0;
}