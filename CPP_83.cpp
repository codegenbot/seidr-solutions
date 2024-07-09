#include <vector>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n) {
            count++;
        }
        for (int j = 1; j <= 9; j++) {
            if ((i == 1 && j != 1) || (j == 1 && i != 1)) {
                count++;
            }
            else if (i > 1 && j > 1) {
                count += pow(10, n - 2);
            }
        }
    }
    return count;
}