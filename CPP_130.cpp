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
                int a = i > 1 ? result[i - 1] : 3;
                int b = i > 2 ? result[i - 2] : 3;
                int c = i < n ? result[i] : 0;
                result.push_back(a + b + c);
            }
        }
    }
    return result;
}