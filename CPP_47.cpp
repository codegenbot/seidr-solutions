#include <algorithm>
#include <vector>
#include <cassert>
#include <cmath>

double median(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 1) {
        return l[n / 2];
    } else {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    }
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7.0) < 1e-4);
    return 0;
}