#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    if (n >= 1) {
        result[0] = 3;
    }
    if (n >= 2) {
        result[1] = 1;
    }
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result[i] = 1 + i / 2;
        } else {
            int evenIndex = i - 1;
            int oddIndex = i - 2;
            result[i] = result[evenIndex] + result[oddIndex];
        }
    }
    return result;
}