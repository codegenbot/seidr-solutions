#include <algorithm>
#include <cmath>

int findMax(int l[], int n) {
    return *std::max_element(l, l+n);
}