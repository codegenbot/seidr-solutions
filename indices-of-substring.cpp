```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<long long> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<long long> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
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
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<long long> indices = indicesOfSubstring(text, target);
    for (long long index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}
```