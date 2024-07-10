#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            int a = result[i - 2];
            int b = result[i - 1];
            int c = (result[0] + result[1]) / 2;
            result.push_back(a + b + c);
        }
    }
    return result;
}