```cpp
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();
  
    for (int i = 0; i < textLength - targetLength + 1; i++) {
        if (std::equal(target.begin(), target.end(), text.begin() + i)) {
            indices.push_back(i);
        }
    }
  
    return indices;
}
```