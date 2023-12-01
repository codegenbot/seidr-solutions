#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int len = text.length();
    int targetLen = target.length();
    for (int i = 0; i <= len - targetLen; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text;
    std::cin >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    return 0;
}