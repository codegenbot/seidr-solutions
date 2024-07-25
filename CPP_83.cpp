#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (i < 10 && i > 1) {
            count += 8;
        } else if (i >= 10) {
            for (int j = 1; j <= 9; j++) {
                int num = i * pow(10, (n - 1)) + j;
                if (num % 10 == 1 || num / pow(10, n - 1) == 1) {
                    count++;
                }
            }
        }
    }
    return count;
}