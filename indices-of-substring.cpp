#include <iostream>
#include <string>
#include <vector>
#include <limits>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
    
    std::vector<int> indices;
    
    for (int i = 0; i <= static_cast<int>(text.size()) - static_cast<int>(target.size()); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}