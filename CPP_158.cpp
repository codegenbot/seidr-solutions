```cpp
#include <iostream>
#include <string>
#include <cassert>

std::string find_max(const std::vector<std::string>& words) {
    int max_length = 0;
    for (auto& word : words) {
        if (word.size() > max_length) {
            max_length = word.size();
        }
    }
    return std::string(max_length, '*');
}

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    assert(find_max(words) == "play");
    return 0;
}
```