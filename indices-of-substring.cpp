#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        if (pos < text.length()) {
            indices.push_back(pos);
        }
        pos = text.find(target, pos + 1);
    }

    for (int idx : indices) {
        std::cout << idx << " ";
    }

    return 0;
}