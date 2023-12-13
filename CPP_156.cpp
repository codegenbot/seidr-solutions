```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    for (const auto& r : roman) {
        std::cout << r.c_str() << std::endl;
    }
}
```