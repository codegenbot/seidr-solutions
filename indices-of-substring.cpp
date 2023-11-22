#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        int j;
        for (j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == targetLength) {
            indices.push_back(i);
        }
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