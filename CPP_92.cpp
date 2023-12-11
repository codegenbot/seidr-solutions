```cpp
#include <iostream>
#include <cmath>

bool any_int(float a, float b, float c) {
    __const_iterator sum = (__const_iterator)(a + b);
    return (sum == c || sum == a || sum == b);
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