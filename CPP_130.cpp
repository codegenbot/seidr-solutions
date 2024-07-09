#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    if (n > 0) {
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0)
                result.push_back(1 + i / 2);
            else
                result.push_back(result[i - 1] + result[i - 2] + (result.size() > i ? result[i] : 3));
        }
    }
    return result;
}