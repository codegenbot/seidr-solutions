#include<stdio.h>
#include<vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> res(1);
    if (n == 0) return res;
    res.push_back(3);
    if (n == 1) return res;
    res.push_back(2);
    for (int i = 3; i <= n; ++i) {
        int sum = 0;
        if (i % 2 == 0)
            sum = 1 + i / 2;
        else
            sum = res[i - 1] + res[i - 2] + res[i];
        res.push_back(sum);
    }
    return res;
}