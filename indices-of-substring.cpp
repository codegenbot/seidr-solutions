#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    
    size_t i;
    for (i = 0; i < text.length(); ++i) {
        if (i <= text.length() - target.length() && text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
        if (i == text.length() - target.length() && text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }
    
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}