#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    
    size_t i;
    for (i = 0; i < text.length(); ++i) {
        if (i <= text.length() - target.length() + 1 && text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
        else if (i == text.length() - target.length() && std::equal(text.begin() + i, text.end(), target.begin())) {
            indices.push_back(i);
        }
    }
    
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}