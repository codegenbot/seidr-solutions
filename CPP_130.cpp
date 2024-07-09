#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1);
    if (n > 0) {
        result.push_back(3);
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                int sum = 0;
                if (i >= 4) {
                    sum += result[i - 3];
                }
                if (i >= 3) {
                    sum += result[i - 2];
                }
                if (i >= 2) {
                    sum += result[i - 1];
                }
                result.push_back(sum);
            }
        }
    }
    return result;
}