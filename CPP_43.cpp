#include <vector>
#include <cassert>

bool pairs_sum_to_zero(std::vector<int> l) {
    for (std::size_t i = 0; i < l.size(); i++) {
        for (std::size_t j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}