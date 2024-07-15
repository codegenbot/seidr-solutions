#include <iostream>
#include <string>
#include <vector>

std::vector<int> indices;

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}