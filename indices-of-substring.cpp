#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::cin.ignore();
    std::getline(std::cin, target);
    
    target.erase(std::remove_if(target.begin(), target.end(), ::isspace), target.end());
    int targetSize = target.size();
    
    std::vector<int> indices;
    
    for (int i = 0; i <= static_cast<int>(text.size()) - targetSize; ++i) {
        if (text.substr(i, targetSize) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}