```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices(text.length());
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength + 1; i++) {
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
```