```
#include<iostream>

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
    std::cout << "Enter three float numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c))
        std::cout << "Any two of the input values are equal.\n";
    else
        std::cout << "The input values are distinct.\n";
    return 0;
}