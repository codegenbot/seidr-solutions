#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    size_t i = 0;
    while (i <= text.size() - target.size()) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i + 1);
            i += 1; // Update the position to check overlapping targets
        } else {
            i += 1;
        }
    }

    for (int idx : indices) {
        std::cout << idx << " ";
    }

    return 0;
}