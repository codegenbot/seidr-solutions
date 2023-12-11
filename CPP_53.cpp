```
#include <iostream>
#include <cstdio>

int add(int x, int y) {
    return x + y;
}

int my_main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << add(x, y) << std::endl;
    return 0;
}
```