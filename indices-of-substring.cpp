#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    for (int i = 0; i <= static_cast<int>(text.length()) - static_cast<int>(target.length()); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }

    for (int index : indices) {
        std::cout << index << " ";
    }

    return 0;
}