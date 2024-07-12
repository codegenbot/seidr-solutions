#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    target.erase(std::remove_if(target.begin(), target.end(), ::isspace), target.end());
    std::size_t targetSize = target.size();
    
    std::vector<std::size_t> indices;
    
    for (std::size_t i = 0; i < text.size() - targetSize + 1; ++i) {
        if (text.substr(i, targetSize) == target) {
            indices.push_back(i);
        }
    }
    
    for (std::size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}