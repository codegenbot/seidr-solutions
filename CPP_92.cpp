```
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
    float x, y, z;
    std::cout << "Enter three floating point numbers: ";
    std::cin >> x >> y >> z;
    
    if (any_int(x, y, z))
        std::cout << "The sum of two integers is the third integer." << std::endl;
    else
        std::cout << "This is not an integer solution." << std::endl;

    return 0;
}