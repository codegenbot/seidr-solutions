#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();
    
    for (int i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
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
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices = findIndicesOfSubstring(text, target);
    
    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}