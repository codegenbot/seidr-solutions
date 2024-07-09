int multiply(int a, int b) {
    return (a % 10) * (b % 10);
}

int main() {
    assert(multiply(0, 0) == 0);
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "The product of these numbers is: " << multiply(a, b) << std::endl;
}