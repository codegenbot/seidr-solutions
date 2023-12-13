```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();
  
    for (int i = 0; i < textLength - targetLength + 1; i++) {
        int found = i;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found != false) {
            indices.push_back(found);
        }
    }
  
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
  
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
  
    return 0;
}
```