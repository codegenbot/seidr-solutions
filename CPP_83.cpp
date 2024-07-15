#include <vector>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && n == 1) {
            count++;
        } else if ((i == 1 || i % 10 == 1) && n > 1) {
            for (int j = 1; j <= 9; j++) {
                int num = i * 10 + j;
                if (n > 1 && num < 10e(n-1)) continue;
                count++;
            }
        } else {
            count += 9;
            for (int j = 2; j < 10; j++) {
                int num = i * 10 + j;
                if (num >= 10e(n-1)) break;
                count++;
            }
        }
    }
    return count;
}