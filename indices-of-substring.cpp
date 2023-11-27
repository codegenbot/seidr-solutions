#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    
    for (int i = 0; i <= text.length() - target.length(); i++) {
        bool match = true;
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}