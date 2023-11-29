#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int len = target.length();
    int n = text.length();

    for (int i = 0; i <= n - len; ++i) {
        bool found = true;
        for (int j = 0; j < len; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
            i += len - 1;
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text); 
    std::getline(std::cin, target); 

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}