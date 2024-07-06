```c
#include <iostream>
#include <cmath>
#include <cstdint>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < (1LL << n * 30); j++) {
            long long num = i * (1LL << (n - 1)) + j;
            if (((num / (1LL << (n - 1))) % 10 == 1) || (num % 10 == 1)) {
                count++;
            }
        }
    }
    std::cout << count;
}