#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

double median(const std::vector<int>& l) {
    std::vector<int> temp = l;
    std::sort(temp.begin(), temp.end());
    int n = temp.size();
    if (n % 2 == 0) {
        return (temp[n / 2 - 1] + temp[n / 2]) / 2.0;
    }
    else {
        return temp[n / 2];
    }
}

int main() {
    assert(std::abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);
    return 0;
}