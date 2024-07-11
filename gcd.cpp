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
    int num1 = 111793;
    int num2 = 499756;
    
    int result = gcd(num1, num2);
    std::cout << result << std::endl;
    
    return 0;
}