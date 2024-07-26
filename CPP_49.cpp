#include <iostream>
#include <climits>

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

int calculateModp() {
    int n, p;
    std::cin >> n >> p;
    std::cin.ignore(INT_MAX, '\n');
    return modp(n, p);
}