#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    if (n > 0) {
        for (int i = 2; i <= n; ++i) {
            int prev1 = result[i - 1];
            int prev2 = (i % 2 == 0) ? 1 + i / 2 : result[i - 2] + result[i - 1];
            result.push_back(prev2);
        }
    }
    return result;
}