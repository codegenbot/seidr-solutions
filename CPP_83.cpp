#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 1 || i < 10)) {
            count++;
        }
    }
    for (long long i = 10; i <= pow(10, n - 1); i++) {
        int last_digit = i % 10;
        if ((last_digit == 1 || i / pow(10, floor(log10(i))) % 10 == 1) && (n > 1 || last_digit < 10)) {
            count++;
        }
    }
    return count;
}