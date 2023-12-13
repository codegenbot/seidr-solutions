```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();
  
    for (int i = 0; i < textLength - targetLength + 1; i++) {
        bool found = true;
        for (int j = 0; j < targetLength && j <= targetLength - (i + j); j++) {
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
    std::string text = "abababacd";
    std::string target = "aba";
    
    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
```