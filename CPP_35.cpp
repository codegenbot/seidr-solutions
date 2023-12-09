```
#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<float, 3> v = {1, 2, 3};
    std::cout << "Maximum element: " << std::max_element(v) << std::endl;
    return 0;
}
```