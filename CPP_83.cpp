#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int res = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n) {
            res++;
        }
    }
    for (int i = 10; i < pow(10, n); i++) {
        int temp = i;
        while (temp != 0) {
            if (temp % 10 == 1 || temp / pow(10, floor(log10(temp))) == 1)
                res++;
            temp /= 10;
        }
    }
    return res;
}