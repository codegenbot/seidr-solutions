#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 1 || i < 10)) {
            count++;
        }
    }
    for (long long i = 10; i <= pow(10, n - 1); i++) {
        int last_digit = static_cast<int>(i % 10);
        if ((last_digit == 1 || static_cast<int>(i / pow(10LL, log10(i))) % 10 == 1) && (n > 1 || last_digit < 10)) {
            count++;
        }
    }
    return count;
}