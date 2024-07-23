#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1,num2) << std::endl;
    return 0;
}