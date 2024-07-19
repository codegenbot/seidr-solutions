#include <iostream>
bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 1e-9 && abs(b - (a + c)) < 1e-9 && abs(c - (a + b)) < 1e-9) {
        return true;
    }
    return false;
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    if(any_int(a, b, c))
        std::cout << "The numbers are integers." << std::endl;
    else
        std::cout << "The numbers are not integers." << std::endl;
    return 0;