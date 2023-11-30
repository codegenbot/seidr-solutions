#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        bool found = true;
        for (int j = 0; j < targetLen; j++) {
            if (target[j] == '\\' && text[i + j] != '\\') {
                found = false;
                break;
            } else if (target[j] != '\\' && text[i + j] != target[j]) {
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