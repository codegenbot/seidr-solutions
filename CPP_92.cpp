#include <iostream>

bool any_int(double a, double b, double c) {
    if ((a == b + c) || (b == a + c) || (c == a + b)) {
        if (a == (int)a && b == (int)b && c == (int)c) {
            return true;
        }
    }
    return false;
}

int main() {
    double a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (any_int(a, b, c)) {
        std::cout << "Numbers satisfy condition." << std::endl;
    } else {
        std::cout << "Numbers do not satisfy condition." << std::endl;
    }

    return 0;
}