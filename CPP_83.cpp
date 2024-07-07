#include <stdio.h>
using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j < i; j *= 10) {
            if ((j * 10 + i) > n) break;
            if (i == 1 || i % 10 == 1) {
                count++;
            }
        }
    }
    return count;
}