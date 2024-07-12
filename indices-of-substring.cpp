#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    int targetSize = target.size();
    for (int i = 0; i < static_cast<int>(text.size()) - targetSize + 1; ++i) {
        if (text.substr(i, targetSize) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}