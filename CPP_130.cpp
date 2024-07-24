#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    if (n >= 1) {
        result[0] = 3;
        if (n >= 2) {
            result[1] = 1 + 2 / 2.0;
            if (n >= 3) {
                result[2] = 1 + result[1] / 2.0;
                for (int i = 3; i <= n; i++) {
                    result[i] = result[i - 1] + result[i - 2] + result[i - 3];
                }
            }
        }
    }
    return result;
}