#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    if (target.empty()) {
        return 0;
    }

    std::vector<size_t> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1; // move to the next index after the current occurrence, allowing overlapping occurrences
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}