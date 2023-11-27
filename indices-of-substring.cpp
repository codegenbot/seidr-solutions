#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    
    size_t pos = text.find(target);
    while (pos != std::string::npos - target.size() + 1) {
        indices.push_back(pos);
        pos = text.find(target, pos + target.size());
    }
    
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}