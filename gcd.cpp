```cpp
int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return a;
    else
        return greatestCommonDivisor(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "The greatest common divisor is: " << greatestCommonDivisor(num1, num2) << std::endl;
    return 0;
}