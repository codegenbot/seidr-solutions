#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> res(1, 3);
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0)
            res.push_back(1 + i / 2);
        else
            res.push_back(res[i-1] + res[i-2] + (res.size() > 3 ? res[i-3] : 3));
    }
    return res;
}