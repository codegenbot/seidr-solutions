#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

double median(const std::vector<int>& l) {
    std::vector<int> l_copy = l;
    std::sort(l_copy.begin(), l_copy.end());
    int n = l_copy.size();
    if (n % 2 == 0) {
        return (l_copy[n / 2 - 1] + l_copy[n / 2]) / 2.0;
    } else {
        return l_copy[n / 2];
    }
}

int main() {
    assert(std::abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);
    return 0;
}