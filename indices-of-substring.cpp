#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    size_t pos = text.find(target, 0, target.length());
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1, target.length());
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}