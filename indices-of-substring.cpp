#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    
    for (int i = 0; i <= text.length() - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices = findIndices(text, target);
    
    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}