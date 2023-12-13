```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::vector<std::string>& words) {
    // ...
}

int main() {
    const std::vector<std::string> words{"play", "play", "play"};
    assert((find_max(words) == "play"));
    return 0;
}
```