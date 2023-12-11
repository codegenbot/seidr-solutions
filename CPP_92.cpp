```cpp
#include <iostream>
#include <cmath>
#include <string>

bool any_int(float a, float b, float c) {
    int sum = (int)(a + b);
    return (sum == c || sum == a || sum == b);
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    int result = any_int(a, b, c);
    std::string str = std::to_string(result);
    std::cout << str << std::endl;
    return 0;
}
```