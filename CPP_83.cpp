#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (n > 1) {
            for (long long j = 1; j <= 9; j++) {
                string str = to_string(i);
                str += to_string(j);
                if ((str[0] - '0' == 1 || str[str.length() - 1] - '0' == 1) && str.length() == n)
                    count++;
            }
        }
    }
    return count;
}