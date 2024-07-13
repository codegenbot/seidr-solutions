#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (n > 1 && i != 1) {
            long long num = i;
            for (int j = 2; j < n - 1; j++)
                num = num * 10 + 9;
            num = num * 10 + i;
            if (num % 10 == 1 || num / pow(10, n) == 1)
                count++;
        }
    }
    return count;
}