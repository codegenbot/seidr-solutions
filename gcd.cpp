```cpp
#include <iostream>

int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return a;
    else
        return greatestCommonDivisor(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int result = greatestCommonDivisor(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    return 0;
}