#include <cmath>
#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i & 1) {
            count++;
        }
        if (n > 1) {
            long long multiplier = i * static_cast<long long>(pow(10, n - 1));
            for (int j = 1; j < pow(10, n - 1); j++) {
                int num = multiplier + j;
                if ((num & 0x0f) == 1 || num % 10 == 1) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    std::cout << starts_one_ends(2);
    return 0;
}