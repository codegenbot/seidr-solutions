```cpp
#include <iostream>
#include <sstream>

bool any_int(float a, float b, float c) {
    int sum = (int)(a + b);
    return (sum == c || sum == a || sum == b);
}

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        int sum = a + b;
        std::ostringstream oss;
        oss << sum;
        std::cout << "True" << oss.str() << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
```