#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty() || target.length() > text.length() - target.length() + 1) {
        return 0;
    }

    int pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        ++pos;  // Move to the next position to allow overlapping targets
    }

    for (int i = 0; i < indices.size() && indices.size() <= text.length() - target.length() + 1; ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}