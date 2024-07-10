#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9)
            count++;
        else
            for (int j = 1; j < i; j++)
                for (int k = 0; k < n - 2; k++)
                    if ((j % 10 != 1 && k % 10 != 1) || j % 10 == 9)
                        count++;
    }
    return count;
}