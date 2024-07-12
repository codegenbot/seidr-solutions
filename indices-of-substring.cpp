#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty()) {
        std::cout << 1;
        return 0;
    }

    int pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos || target.length() == 1) {
        indices.push_back(pos);
        if (target.length() > 1) {
            ++pos;  // Move to the next position to allow overlapping targets
        } else {
            pos += target.length();
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}