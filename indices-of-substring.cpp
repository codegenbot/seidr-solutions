#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        int j;
        for (j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }

        if (j == targetLen) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    getline(std::cin, text); 
    getline(std::cin, target);

    std::replace(text.begin(), text.end(), '\\', '/');

    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}