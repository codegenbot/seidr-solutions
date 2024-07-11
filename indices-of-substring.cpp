#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty()) {
        std::cout << 0;
        return 0;
    }

    int pos = 0;
    while (pos < text.size() - target.size() + 1) {
        if (text.substr(pos, target.size()) == target) {
            indices.push_back(pos);
        }
        ++pos;
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}