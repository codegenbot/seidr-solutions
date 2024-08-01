#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    int res = 0;
    for (int i = 1; i <= 9; ++i) {
        if ((i == 1 || i % 10 == 1) && isOne(n, i)) {
            res++;
        }
    }
    return res;
}

bool isOne(int n, int num) {
    string str = to_string(num);
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '1') {
            return true;
        }
    }
    return false;
}