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
        for (long long j = 1; j < 1000000000L; j++) {
            long long num = i * 100000000L + j;
            if ((num / 100000000L) % 10 == 1 || num % 10 == 1) {
                count++;
            }
        }
    }
    std::cout << count;
}