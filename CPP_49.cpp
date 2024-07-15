#include <iostream>

int modp(int n, int p) {
    if (p == 1) return 0;
    int result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}

int main() {
    int n, p;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of p: ";
    std::cin >> p;

    int result = modp(n, p);
    std::cout << "Result: " << result << std::endl;

    return 0;
}