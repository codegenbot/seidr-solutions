#include <vector>
#include <cstddef>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;
    std::size_t i;
    for (i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }
    return increasing || decreasing;
}