```cpp
#include <iostream>
#include <string>

bool any_int(float a, float b, float c) {
    int sum = (int)(a + b);
    return (sum == c || sum == a || sum == b);
}

std::string main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        int sum = a + b;
        std::string oss = std::to_string(sum);
        return oss;
    } else {
        return "False";
    }
}
```