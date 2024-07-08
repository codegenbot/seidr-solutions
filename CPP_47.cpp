#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

double median(std::vector<int>& l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    return (n % 2 == 0) ? (l[n/2 - 1] + l[n/2]) / 2.0 : l[n/2];
}

int main() {
    std::vector<int> l = {8, 1, 3, 9, 9, 2, 7};
    assert(std::abs(median(l) - 7) < 1e-4);
}