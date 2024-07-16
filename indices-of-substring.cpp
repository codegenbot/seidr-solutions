#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    size_t i = 0;
    while (i < text.size()) {
        size_t found = text.find(target, i);
        if (found != std::string::npos) {
            indices.push_back(found);
            i = found + 1;
        } else {
            break;
        }
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}