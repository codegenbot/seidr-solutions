```cpp
#include <iostream>
#include <cmath>

bool any_int(float a, float b, float c) {
    if (a == static_cast<int>(a) && 
        b == static_cast<int>(b) && 
        c == static_cast<int>(c)) {
        return (a == b + c || a == c + b || b == c + a);
    }
    return false;
}

int main() {
    float a, b, c;
    std::cout << "Enter three floats: ";
    std::cin >> a >> b >> c;

    if (any_int(a, b, c))
        std::cout << "The sum of two integers is the third integer." << std::endl;
    else
        std::cout << "None of the input values are integers." << std::endl;

    return 0;
}