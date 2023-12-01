#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        int j;
        for (j = 0; j < targetLen; j++) {
            if (text[i+j] != target[j])
                break;
        }
        if (j == targetLen)
            indices.push_back(i);
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}