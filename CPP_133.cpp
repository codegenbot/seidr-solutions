```cpp
#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = sum_squares(num1, num2);
    std::cout << "Sum of squares is: " << sum << std::endl;

    return 0;
}

int sum_squares(int a, int b) {
    return a * a + b * b;
}