#include <vector>
#include <string>
#include <iostream>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    size_t targetLength = target.length();
    
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + targetLength);
    }
    
    return indices;
}

int main() {
    std::string text = "845523458710";
    std::string target = "458710";
    
    std::vector<int> result = findIndices(text, target);
    
    for (int index : result) {
        std::cout << index << " ";
    }
    
    return 0;
}