#include <iostream>

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (; n > 0; n >>= 1) {
        if ((n & 1) != 0)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}

int main() {
    int n, p;
    std::cout << "Enter value of n: ";
    std::cin >> n;
    std::cout << "Enter value of p: ";
    std::cin >> p;
    std::cout << "2^" << n << " mod " << p << " = " << modp(n, p) << std::endl;
    return 0;
}