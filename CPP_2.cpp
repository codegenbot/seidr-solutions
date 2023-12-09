```
#include <iostream>
#include <cmath>

float truncate_number(float number) {
    return number - std::floor(number);
}

int main(void) {
    double number;
    std::cout << "Enter a positive floating point number: ";
    std::cin >> number;
    std::cout << "The decimal part of the number is: " << truncate_number(number) << std::endl;
    return 0;
}
```