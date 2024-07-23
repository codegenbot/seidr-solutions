#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    if (n > 0) {
        for (int i = 2; i <= n; ++i) {
            int tribonacci = 0;
            if (i % 2 == 0)
                tribonacci = 1 + i / 2;
            else
                tribonacci = result[i - 1] + result[i - 2] + result[i];
            result.push_back(tribonacci);
        }
    }
    return result;
}