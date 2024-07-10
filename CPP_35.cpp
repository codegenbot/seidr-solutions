#include <algorithm>
#include <cmath>

int max_abs(int* l) {
    return *std::max_element(l, l + sizeof(int)*5/sizeof(int)) - *std::min_element(l, l + sizeof(int)*5/sizeof(int));
}