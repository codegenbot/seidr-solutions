```cpp
#include <iostream>

bool any_int(float a, float b, float c) {
    return (a == b + c || a == b - c || a == c + b || a == c - b) && 
           (int(a) == a) && (int(b) == b) && (int(c) == c);
}

int main() {
    float a, b, c;
    std::cout << "Enter three floating point numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c))
        std::cout << "Any of these numbers is an integer.\n";
    else
        std::cout << "None of these numbers are integers.\n";
    return 0;
}