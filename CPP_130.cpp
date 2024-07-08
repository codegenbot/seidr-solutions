#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result;
    if (n == 0) return result;
    result.push_back(3);
    if (n > 1) {
        if (n % 2 == 0) result.push_back(1 + n / 2);
        else {
            int a = 1, b = 3, c = 2;
            for (int i = 2; i <= n; i++) {
                result.push_back(a + b + c);
                if (i % 2 == 0) a = 1 + i / 2;
                else a = b, b = c, c = a + b + 3;
            }
        }
    }
    return result;
}