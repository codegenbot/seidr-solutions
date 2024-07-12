#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    
    for (int i = 0; i <= static_cast<int>(text.size()) - static_cast<int>(target.size()); ++i) {
        if (text.compare(i, target.size(), target) == 0) {
            indices.push_back(i);
        }
    }
    
    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}