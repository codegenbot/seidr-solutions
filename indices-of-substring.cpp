#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    size_t i = 0;
    while (i < text.size()) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i + 1);
            i += target.size(); // Update position to skip overlapping characters
        } else {
            i += 1;
        }
    }

    for (int idx : indices) {
        std::cout << idx << " ";
    }

    return 0;
}