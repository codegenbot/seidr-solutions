```c++
int multiply(int a, int b) {
    return (a % 10) * (b % 10);
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "The product is: " << multiply(num1, num2) << std::endl;
}