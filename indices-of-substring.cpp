#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetSize = target.size();
    
    for (int i = 0; i <= text.size() - targetSize; ++i) {
        bool found = true;
        
        for (int j = 0; j < targetSize; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    std::string text;
    std::string target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices = findIndicesOfSubstring(text, target);
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}