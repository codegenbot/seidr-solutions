#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> seen;

    for (size_t i = 0; i < l.size(); ++i) {
        if (seen.count(-l[i])) {
            return true;
        }
        seen.insert(l[i]);
    }

    return false;
}