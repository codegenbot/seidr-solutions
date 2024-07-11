#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text); 
    text.append(1, ' '); 

    std::getline(std::cin, target);

    std::vector<size_t> indices;
    size_t pos = 0;
    size_t prev_pos = std::string::npos; 

    while ((pos = text.find(target, pos)) != std::string::npos) {
        if (pos != prev_pos) {
            indices.push_back(pos); 
        } 
        prev_pos = pos; 
        pos++; 
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}