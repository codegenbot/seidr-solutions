#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; ++i) {
        if (i == 1 || i % 10 == 1)
            count += pow(10, n-1);
        else
            count += pow(10, n-1);
    }
    return count;
}