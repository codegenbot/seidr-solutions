#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if (i == 1 || i == 9) {
            count += pow(10, n - 1);
        } else {
            for (int j = 1; j < pow(10, n - 1); j++) {
                string str = to_string(i) + to_string(j);
                if (str[0] == '1' || str[str.length() - 1] == '1') {
                    count++;
                }
            }
        }
    }
    return count;
}