#include <vector>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    size_t i, j;
    for (i = 0; i < l.size(); ++i) {
        for (j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}