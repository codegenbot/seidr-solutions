#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    int found = 0;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos && found == 0) {
        indices.push_back(pos);
        ++pos;
        found = 0;
    }
    
    std::cout << indices.size() << std::endl;
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}