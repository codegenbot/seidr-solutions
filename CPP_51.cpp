```
#include <iostream>
#include <string>

std::string remove_vowels(const std::string& text) {
    std::string vowels = "aeiou";
    std::string result;
    for (auto c : text) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}
```