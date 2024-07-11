#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while ((unsigned int)pos < text.size() - target.size() + 1) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}