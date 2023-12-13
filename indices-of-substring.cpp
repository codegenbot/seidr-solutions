```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices(text.length() - target.length() + 1);
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
            indices[i] = i;
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}
```