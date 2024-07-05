#include <cmath>
#include <stdio.h>
using namespace std;

int starts_one_ends(int n) {
    if (n == 1) return 1; // Only one digit '1'
    int count = 0;
    // Count numbers starting with 1
    count += 9 * pow(10, n-2); // 1XXXX... (n-1 digits)
    // Count numbers ending with 1
    count += 9 * pow(10, n-2); // XXXX1... (n-1 digits)
    // Remove double counted numbers (start and end with 1)
    count -= pow(10, n-2); // 1XXX1... (n-2 digits)
    return count;
}