#include <vector>
#include <cassert>
#include <cstddef>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true, decreasing = true;
    size_t i;
    for (i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}
