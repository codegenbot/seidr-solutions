```cpp
#include <iostream>
#include <string>

int remove_vowels(std::string text) {
    std::string vowels = "aeiou";
    return std::string("").join([c for c in text if c.lower() not in vowels]);
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}
```