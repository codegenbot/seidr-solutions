#include <stdio.h>
#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            result[i] = 1;
        else
            for (int j = 1; j <= i; j++)
                result[i] += j;
        if (i % 2 != 0)
            result[i] = 1;
    }
    return result;
}