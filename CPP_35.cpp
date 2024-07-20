#include <algorithm>
#include <cmath>

int findMax(int l[], int n) {
    return *max_element(l, l+n);
}