#include <algorithm>
#include <cmath>

int findMax(int l[], int n) {
    if(n <= 0)
        return -1;
    return *std::max_element(l, l+n);
}