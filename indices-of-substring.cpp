#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    size_t pos = 0;
    while (pos != std::string::npos && pos < text.size()) {
        pos = text.find(target, pos);
        if (pos != std::string::npos) {
            indices.push_back(pos);
            pos += 1;
        }
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}