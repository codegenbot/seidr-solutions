#include <vector>
#include <algorithm>
bool below_threshold(const std::vector<int>& l, int t) {
    return std::none_of(l.begin(), l.end(), [t](int num) { return num >= t; });
}