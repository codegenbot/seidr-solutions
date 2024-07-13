#include <iostream>
#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    std::srand(time(0));
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int sum = add(num1, num2);
    std::cout << "Sum of the numbers is: " << sum << std::endl;
    return rand() % 100; // seed for random number
}