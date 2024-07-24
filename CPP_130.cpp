#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> res(2);
    if (n > 1) {
        res.push_back(3);
        if (n > 2) {
            res.push_back(1 + n / 2);
            for (int i = 3; i <= n; i++) {
                int t = res[i - 1] + res[i - 2] + (i % 2 ? res[i - 3] : 1 + i / 2);
                res.push_back(t);
            }
        }
    }
    return res;
}