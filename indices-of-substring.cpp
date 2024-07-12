#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    size_t startPos = 0;
    size_t pos = text.find(target, startPos);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        startPos = pos + 1;
        pos = text.find(target, startPos);
        if (pos == startPos) {
            ++startPos;
            pos = text.find(target, startPos);
            continue;
        }
    }
    
    for (size_t i = 0; i < indices.size(); ++i) {
       std::cout << indices[i] << " ";
    }
    
    return 0;
}