#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> solve(int n) {
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = (i % 2 == 0) ? std::accumulate(result.begin(), result.begin() + i + 1, 1, std::multiplies<int>())
                                : std::accumulate(result.begin(), result.begin() + i + 1, 0);
    }
    return result;
}

std::vector<int> f(int n) {
    return solve(n);
}