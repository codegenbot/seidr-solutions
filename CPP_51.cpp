```
#include <iostream>
#include <string>
#include <algorithm>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (auto c : text) {
        if (!std::isalpha(c)) {
            result += c;
        }
    }
    return result;
}
```