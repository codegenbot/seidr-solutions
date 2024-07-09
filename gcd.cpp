int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    std::cout << "The GCD of the given numbers is: " << result << std::endl;
    return 0;
}

int findGCD(int a, int b) {
    if (b == 0) return labs(a);
    while (b != 0) {
        int temp = b;
        b = labs(a) % labs(b);
        a = temp;
    }
    return labs(b); 
}