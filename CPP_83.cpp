#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow((double)10, n-1); i++) {
        if (i % 10 == 1 || (i / static_cast<int>(pow(10, n-1))) % 10 == 1) {
            count++;
        }
    }
    return count;
}