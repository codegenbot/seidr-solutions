```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::string& words) {
    // ...
}

int main() {
    std::vector<char> words{"play", "play", "play"};
    assert((find_max("play") == "play"));
    return 0;
}
```