#include <iostream>

int modp(int n, int p) {
    if (p == 0) {
        return 1;
    }
    int res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (res * p) % p;
        }
        p = (p * p) % p;
        n >>= 1;
    }
    return res;
}

int main() {
    std::cout << modp(3, 5) << std::endl;
    std::cout << modp(1101, 101) << std::endl;
    std::cout << modp(0, 101) << std::endl;
    std::cout << modp(3, 11) << std::endl;
    std::cout << modp(100, 101) << std::endl;
    return 0;
}