```cpp
#include <iostream>
#include <iomanip>

bool any_int(float a, float b, float c) {
    return (a == (int)a) && (b == (int)b) && (c == (int)c);
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if(any_int(a, b, c))
        std::cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    else
        std::cout << "The numbers are not integers: " << a << ", " << b << ", " << c << "\n";
    return 0;
}