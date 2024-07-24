#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1);
    if (n > 0) {
        result.push_back(3);
        for (int i = 2; i <= n; i++) {
            int num;
            if (i % 2 == 0)
                num = 1 + i / 2;
            else
                num = result[i - 1] + result[i - 2] + (i > 1 ? result[i - 3] : 3);
            result.push_back(num);
        }
    }
    return result;
}