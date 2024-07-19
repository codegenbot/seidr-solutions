```
#include <iostream>
using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n) {
            count++;
        }
        int start = (i == 1) ? 1 : i;
        int end = (n < i) ? n + 1 : i;
        for (int j = start; j <= end; j++) {
            if (j % 10 != 0 && (j / 10 == 1 || j / 10 == n)) {
                count++;
            }
        }
    }
    return count;

}