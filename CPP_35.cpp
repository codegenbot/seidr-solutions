#include <algorithm>
#include <cmath>

int maxAbs(int l[], int n) {
    return *std::max_element(l, l+n);
}