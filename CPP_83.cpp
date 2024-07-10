#include <stdio.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; ; i *= 10) {
        if (i > n) break;
        count += 2; // start and end with 1
        if (i < n) {
            long long j = i * 10 + 1;
            while (j <= n) {
                count++;
                j *= 10;
            }
        }
    }
    return count;
}