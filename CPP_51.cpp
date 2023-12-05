```cpp
#include <iostream>
#include <string>

int remove_vowels(std::string text) {
    std::string vowels = "aeiou";
    for (auto it = text.begin(); it != text.end(); ++it) {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u') {
            std::size_t pos = it - text.begin();
            text.erase(pos, 1);
        }
    }
    return text;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}
```