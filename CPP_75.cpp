#include <iostream>

bool is_multiply_prime(int a) {
    if (a < 30) return false;
    int i;
    for (i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            int b = a / i;
            for (int j = 2; j <= b / 2; ++j) {
                if (b % j == 0) {
                    int c = b / j;
                    if (c != 1 && c != i && c != j) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << std::boolalpha << is_multiply_prime(x) << std::endl;
    return 0;
}