#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    if (!std::getline(std::cin >> std::ws, text) || text.empty()) return 1;
    if (!std::getline(std::cin >> std::ws, target) || target.empty()) return 1;
    
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + (target.length() > 1 ? 1 : 0));
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}