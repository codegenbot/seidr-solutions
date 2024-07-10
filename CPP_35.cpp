#include <algorithm>
#include <cmath>

int maxAbsolute(int* l, int n) {
    assert(n > 0);
    return *std::max_element(l, l+n);