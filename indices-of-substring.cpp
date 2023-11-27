#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetSize = target.size();
    int textSize = text.size();

    for (int i = 0; i <= textSize - targetSize; i++) {
        int j;
        for (j = 0; j < targetSize; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == targetSize) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}