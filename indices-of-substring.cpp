#include <iostream>
#include <vector>
#include <string>

std::vector<int> getSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();
    
    for(int i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    std::string text;
    std::string target;
    std::cin >> text;
    std::cin >> target;
    
    std::vector<int> indices = getSubstringIndices(text, target);
    
    for(int i : indices) {
        std::cout << i << " ";
    }
    
    return 0;
}