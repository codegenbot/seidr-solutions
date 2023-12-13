```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        for (int j = 0; j <= targetLen - 1; j++) {
            bool found = true;
            for (int k = 0; k < targetLen; k++) {
                if (text[i + j + k] != target[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                indices.push_back(i + j);
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

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
```