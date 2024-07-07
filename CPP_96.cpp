int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> primes = countUpTo(n);
    for (int prime : primes) {
        if (!isSame({prime}, {primes[0]})) {
            std::cout << "Prime number: " << prime << std::endl;
        }
    }
    return 0;