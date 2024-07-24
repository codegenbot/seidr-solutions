#include <algorithm>
#include <cmath>

int maxAbsoluteValue(int* l, int n) {
    return std::abs(*std::max_element(l, l + n));
}