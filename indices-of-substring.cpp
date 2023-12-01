#include <iostream>
#include <string>
#include <vector>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices = findSubstringIndices(text, target);

    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}