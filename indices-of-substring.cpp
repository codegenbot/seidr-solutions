#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.length();
    int m = target.length();

    if (m == 0) {
        for (int i = 0; i <= n; i++) {
            indices.push_back(i);
        }
    } else {
        for (int i = 0; i <= n - m + 1; i++) {
            int j;
            for (j = 0; j < m; j++) {
                if (text[i + j] != target[j]) {
                    break;
                }
            }
            if (j == m) {
                indices.push_back(i);
            }
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        std::cout << i << " ";
    }

    return 0;
}