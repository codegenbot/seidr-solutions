#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 12; 
    int b = 15;
    std::cout << "GCD: " << std::gcd(a, b) << std::endl;
    return 0;
}