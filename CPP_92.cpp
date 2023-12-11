```cpp
#include <iostream>
#include <cmath>

bool any_int(float a, float b, float c) {
    return (a == b || a == c || b == c);
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
```