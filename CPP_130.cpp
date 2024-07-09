#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(0);
    if (n == 0) return result;
    result.push_back(3);
    if (n == 1) return result;
    result.push_back(1);
    if (n == 2) return result;
    for (int i = 3; i <= n; ++i) {
        int val = 0;
        if (i % 2 == 0) val = 1 + i / 2;
        else val = result[i-1] + result[i-2] + result[i-3];
        result.push_back(val);
    }
    return result;
}