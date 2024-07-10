#include <algorithm>
#include <cmath>

double find_max_abs(const std::vector<int>& l) {
    return *std::max_element(l.begin(), l.end());
}