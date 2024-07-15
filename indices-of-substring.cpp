#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text); 
    std::getline(std::cin, target);

    if (target.empty()) {
        std::cout << "0";
        return 0;
    }

    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos = text.find(target, pos + target.length());
    }
    
    for (int i : indices) {
        std::cout << i << " ";
    }
    
    return 0;
}