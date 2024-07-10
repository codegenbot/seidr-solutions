#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; ++i) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (n > 1 && i % 10 != 1)
            continue;
        for (long long j = 1; j < n - 1; ++j) {
            if ((i * 10 + j) % 10 != 1 || (i * 10 + j) / 10 % 10 == 1)
                break;
            if (n > 2 && j >= 10)
                continue;
        }
        count++;
    }
    return count;
}