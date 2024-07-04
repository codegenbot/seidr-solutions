#include <cmath>

int starts_one_ends(int n) {
    if (n == 1) return 1; // Only 1 is a single-digit number starting and ending with 1
    // Total n-digit numbers starting with 1: 9 * 10^(n-2)
    // Total n-digit numbers ending with 1: 9 * 10^(n-2)
    // Numbers that start and end with 1: 10^(n-2)

    int totalStartWith1 = 9 * pow(10, n-2);
    int totalEndWith1 = 9 * pow(10, n-2);
    int startAndEndWith1 = pow(10, n-2);

    return totalStartWith1 + totalEndWith1 - startAndEndWith1;
}