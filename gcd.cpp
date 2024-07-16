#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos = pos + 1;
    }
    return indices;
}

int main() {
    std::string text = "247650299098";
    std::string target = "299098";
    
    std::vector<int> result = findIndices(text, target);
    
    for (int idx : result) {
        std::cout << idx << " ";
    }
    
    return 0;
}