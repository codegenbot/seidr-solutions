int findGCD(int a, int b) {
    if (b == 0) return abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(b); 
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    std::cout << "GCD: " << result << std::endl;
    return 0;
}