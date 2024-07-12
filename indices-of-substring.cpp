#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    
    std::istringstream iss(text);
    std::string word;
    while (iss >> word) {
        text += word;
    }
    
    for (size_t i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(static_cast<int>(i));
        }
    }
    
    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}