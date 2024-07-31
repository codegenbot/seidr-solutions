#include <iostream>

bool any_int(double a, double b, double c) {
    if ((int)a == a && (int)b == b && (int)c == c) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}

int main() {
    double num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    if (any_int(num1, num2, num3)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}