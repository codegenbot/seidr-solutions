#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; i++) {
        bool isMatch = true;
        for (int j = 0; j < m; j++) {
            if (text[i+j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
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
    
    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int index : result) {
        std::cout << index << " ";
    }
    
    return 0;
}