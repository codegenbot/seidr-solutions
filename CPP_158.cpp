```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::vector<std::string>& words) {
    // ...
}

int main() {
    std::vector<std::string> words{"play", "play", "play"};
    assert((find_max(words[0], words[1], words[2]) == "play"));
    return 0;
}
```