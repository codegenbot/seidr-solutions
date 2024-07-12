#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    
    for (int i = 0; i < static_cast<int>(text.size()); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}