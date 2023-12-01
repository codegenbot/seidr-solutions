#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetSize = target.size();

    for (int i = 0; i <= text.size() - targetSize; i++) {
        if (text.substr(i, targetSize) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices = findSubstringIndices(text, target);

    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }

    return 0;
}