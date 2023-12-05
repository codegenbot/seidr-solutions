```
#include <iostream>
#include <string>

int main() {
    int x = 0;
    std::cin >> x;
    assert(change_base(x, x + 1) == std::__cxx11::to_string(x));
    return 0;
}
```