#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n == 1 || (i != 1 && i % (long long)pow(10, n-1) == 1)))
            count++;
    }
    for (int i = 11; i <= pow(10, n)-1; i++) {
        if ((i / (long long)pow(10, (n-1)) == 1 || i % 10 == 1) && (n > 1 || (i != 10 && i % (long long)pow(10, n-2) == 1)))
            count++;
    }
    return count;
}