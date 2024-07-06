#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (n > 1) {
            for (int j = 1; j < static_cast<int>(pow(10, n - 1)); j++) {
                int num = i * static_cast<int>(pow(10, n - 1)) + j;
                if ((num / static_cast<int>(pow(10, n - 1))) % 10 == 1 || num % 10 == 1) {
                    count++;
                }
            }
        }
    }
    return count;
}