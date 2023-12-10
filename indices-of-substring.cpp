```
#include <vector>
#include <iostream>
#include <string>

int main() {
    std::vector<int> result;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && text[i + j] == target[j]) {
                ++j;
            }
            if (j == target.size()) {
                result.push_back(i);
            }
        }
    }
    return result;
}
```