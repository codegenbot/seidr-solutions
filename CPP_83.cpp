#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i == 9) && n > 1) {
            count += pow(10, n - 1);
        } else if ((i >= 2 && i <= 8) && n > 0) {
            count += (pow(10, n - 1) * (i - 1)) + 1;
        }
    }
    return count;
}