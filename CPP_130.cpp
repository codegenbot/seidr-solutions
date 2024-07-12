#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> res(n + 1);
    if (n >= 1) {
        res[0] = 3;
        if (n >= 2) {
            res[1] = 1;
            for (int i = 2; i <= n; i++) {
                if (i % 2 == 0)
                    res[i] = 1 + (i / 2);
                else
                    res[i] = res[i - 1] + res[i - 2] + res[i - 3];
            }
        }
    }
    return res;
}