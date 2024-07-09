#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if (i == 1 || i == 10) {
            count++;
        } else {
            for (int j = 1; j < 10; ++j) {
                if ((i * 10 + j) >= pow(10, n - 1) && (i * 10 + j) <= pow(10, n)) {
                    if (i == 1 || i == 10) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}