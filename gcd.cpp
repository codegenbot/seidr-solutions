int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}

int main() {
    std::cout << "GCD of 12 and 15: " << gcd(12, 15) << std::endl;
    std::cout << "GCD of 24 and 30: " << gcd(24, 30) << std::endl;
    return 0;
}