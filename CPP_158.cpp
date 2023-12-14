```
#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::string find_max(const std::string& words) {
    auto it = words.begin();
    char max_char = *it;
    for (++it; it != words.end(); ++it) {
        if (*it > max_char) {
            max_char = *it;
        }
    }
    return std::string(1, max_char);
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}
```