#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            int prev1 = result[i - 1];
            int prev2 = result[i - 2];
            int next = prev1 + prev2;
            result.push_back(next);
        }
    }
    
    return result;
}