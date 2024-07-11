#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<size_t> indices;
  
    for (size_t pos = text.find(target, 0); pos != std::string::npos; pos = text.find(target, pos + 1)) {
        indices.push_back(pos);
        if (target.size() == 1) {
            pos++;
        }
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}