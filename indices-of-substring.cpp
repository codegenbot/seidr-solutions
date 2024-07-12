#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos += 1;
    }
    
    for (int i = 0; i < static_cast<int>(indices.size()); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}