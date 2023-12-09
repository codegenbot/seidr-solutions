```
#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<float, 3> v = {1, 2, 3};
    std::cout << "Maximum element: " << max_element(v) << std::endl;
    return 0;
}
```

The issue is caused by redefining `main()` function twice in the same scope. To fix this, you can remove one of the `main()` functions or rename one of them to avoid conflict.