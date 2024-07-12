#include <algorithm>

int findMax(int l[]) {
    auto maxVal = *max_element(l.begin(), l.end());
    return maxVal;
}