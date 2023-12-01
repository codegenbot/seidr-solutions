#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int textLength = text.length();
    int targetLength = target.length();
    
    for (int i = 0; i <= textLength - targetLength; i++) {
        int j;
        for (j = 0; j < targetLength; j++) {
            if (text[i+j] != target[j]) {
                break;
            }
        }
        if (j == targetLength) {
            result.push_back(i);
        }
    }
    
    return result;
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