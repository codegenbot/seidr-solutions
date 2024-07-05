#include <cmath>

int starts_one_ends(int n) {
    if (n == 1) return 1; // Only one digit number that is 1
    int total = pow(10, n - 1); // Total n-digit numbers
    return 2 * total - 1; // Numbers starting or ending with 1
}