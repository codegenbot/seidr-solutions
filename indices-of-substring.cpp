#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    if (target.empty()) {
        return indices;
    }
    for (int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while (j < target.length() && text[i+j] == target[j]) {
            j++;
        }
        if (j == target.length()) {
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