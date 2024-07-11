#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;

    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}