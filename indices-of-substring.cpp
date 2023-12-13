```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<size_t> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<size_t> indices;
    size_t targetLength = target.length();
    size_t textLength = text.length();

    for (size_t i = 0; i <= textLength - targetLength + 1; i++) {
        bool found = true;
        for (size_t j = 0; j < targetLength; j++) {
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
```