#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            int prev1 = result[i - 1];
            int prev2 = result[i - 2];
            if (i >= 3) {
                int prev3 = result[i - 3];
                result.push_back(prev1 + prev2 + prev3);
            } else {
                result.push_back(prev1 + prev2);
            }
        }
    }
    return result;
}