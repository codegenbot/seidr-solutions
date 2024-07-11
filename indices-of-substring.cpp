
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<size_t> indices;
    size_t pos = 0;

    while (pos <= text.size() - target.size()) {
        if (pos == text.find(target, pos)) {
            indices.push_back(pos);
        }
        pos += (pos == text.find(target, pos) ? 1 : target.size());
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}  