#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    if (n >= 1) {
        result[0] = 3;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            result[i] = 1 + i / 2;
        } else {
            if (i < 4) {
                result[i] = i - 1 >= 0 ? result[i - 1] : 3;
            } else {
                result[i] = result[i - 1] + result[i - 2] + (i + 1 < n + 1 ? result[i + 1] : 0);
            }
        }
    }
    return result;
}