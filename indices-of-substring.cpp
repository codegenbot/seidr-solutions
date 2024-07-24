#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin >> std::ws, target);

    std::vector<int> indices;
    
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1;
    }
    
    for (int index : indices) {
        std::cout << index << " ";
    }
    
    return 0;
}