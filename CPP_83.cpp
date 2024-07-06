#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < n - 1; j++) {
            if ((i == 1 && n % 10 != 1) || (n % 10 == 1)) {
                count++;
            }
        }
    }
    return count;
}