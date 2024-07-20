```
#include <iostream>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if ((ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci))
        return true;
    else
        return false;
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if(any_int(a, b, c)) {
        std::cout << "The sum of two integers is an integer.\n";
    } else {
        std::cout << "The sum of two integers is not an integer.\n";
    }
    return 0;
}