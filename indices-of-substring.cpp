#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    if (target.empty()) {
        return indices;
    }
    
    int text_length = text.length();
    int target_length = target.length();
    
    for (int i = 0; i <= text_length - target_length; i++) {
        int j;
        for (j = 0; j < target_length; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == target_length) {
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
    
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}