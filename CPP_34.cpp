#include <algorithm>
#include <vector>

int countPrimesInRange(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; ++i) {
        bool isPrime = true;
        if (i <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j*j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            ++count;
        }
    }
    return count;
}