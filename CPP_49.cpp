#include <iostream>

int modp(int n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return 3 * n + 1;
    }
}

int main() {
    int n = 0;
    while (n < 10) {
        std::cout << modp(n) << '\n';
        n++;
    }
    return 0;
}