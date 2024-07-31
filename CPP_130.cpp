#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result(n);
    result[0] = 3;
    result[1] = 4;
    for (int i = 2; i < n; ++i) {
        result[i] = result[i - 1] + result[i - 2];
    }
    return result;
}