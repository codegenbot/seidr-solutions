#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>
#include <iostream>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> solve(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = (i % 2 == 0) ? accumulate(result.begin(), result.begin() + i + 1, 1, multiplies<int>())
                                : accumulate(result.begin(), result.begin() + i + 1, 0);
    }
    return result;
}

std::vector<int> f(int n) {
    return solve(n);
}