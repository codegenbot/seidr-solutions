```cpp
#include <iostream>
#include <cmath>

bool any_int(std::__cxx11::basic_string<char>::iterator a, std::__cxx11::basic_string<char>::iterator b, std::__cxx11::basic_string<char>::iterator c) {
    int sum = (int)(a + b);
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