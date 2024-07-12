#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string target, text;
    std::getline(std::cin, target);
    std::getline(std::cin, text);
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos + 1); // 1-based indexing
        pos = text.find(target, pos + 1);
    }
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    return 0;
}