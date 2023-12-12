```
#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame({"Nine", "Eight", "Four"}, by_length({9, 4, 8})) == true);
    return 0;
}
```