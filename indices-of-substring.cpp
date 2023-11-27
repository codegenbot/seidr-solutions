#include <iostream>
#include <string>
#include <vector>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int pos = text.find(target);

    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices = findSubstringIndices(text, target);

    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}