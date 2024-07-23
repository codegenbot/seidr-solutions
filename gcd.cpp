int main() {
    long long num1, num2;
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    std::cout << "GCD of the given numbers is " << gcd(num1, num2) << std::endl;
}
```