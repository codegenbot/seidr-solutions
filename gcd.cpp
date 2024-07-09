int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
    return 0;
}