#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1;  // Move one step forward to check for overlapping occurrences.
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}