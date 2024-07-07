```cpp
int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = num1 * num1 + num2 * num2;
    std::cout << "Sum of squares is: " << sum << std::endl;

    return 0;
}