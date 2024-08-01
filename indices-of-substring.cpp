#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    
    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        bool found = true;
        for (size_t j = 0; j < target.length(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            indices.push_back(i);
        }
    }
    
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}