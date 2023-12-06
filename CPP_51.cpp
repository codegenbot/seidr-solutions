```
#include <iostream>
#include <string>

int remove_vowels(std::string text) {
    std::string vowels = "aeiou";
    std::string result;
    for (auto c : text) {
        if (!vowels.find(c.lower())) {
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