int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a = 0;
    int b = 0;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    int result = gcd(a, b);
    std::cout << "GCD: " << result << std::endl;
    return 0;
}