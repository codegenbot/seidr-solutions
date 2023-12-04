```
#include <iostream>
#include <cassert>
#include <cmath>

float truncate_number(float number) {
    return number - (int)number;
}

int main() {
    float input = 123.456;
    std::cout << "Enter a floating point number: ";
    std::cin >> input;
    std::cout << "The truncated value is: " << truncate_number(input) << std::endl;
    return 0;
}
```