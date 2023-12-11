```
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
    if (any_int(a, b, c)) {
        int sum = a + b;
        std::string str = std::to_string(sum);
        str = std::string("True") + str;
        std::cout << str << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
```