#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    if (n > 0) {
        for (int i = 1; i <= n - 1; i++) {
            int val = (i % 2 == 0) ? 1 + i / 2 : result[i-1] + result[i-2] + (i+1);
            result.push_back(val);
        }
    }
    return result;
}