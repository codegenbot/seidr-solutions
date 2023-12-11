```
#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << add(x, y) << std::endl;
    return 0;
}
```