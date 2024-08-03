#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos += target.length(); // Update post by target's length to handle overlapping targets
    }

    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}