#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        bool match = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices = indicesOfSubstring(text, target);

    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }

    return 0;
}