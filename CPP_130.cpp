#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result;
    if (n == 0) return result;
    result.push_back(1);
    if (n > 1) {
        result.push_back(3);
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                int sum = 0;
                for (int j = 1; j <= 3; j++) {
                    if (j <= i - 1) {
                        sum += result[i - j];
                    }
                }
                result.push_back(sum);
            }
        }
    }
    return result;
}