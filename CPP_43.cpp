#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::unordered_set<int> seen;
    for (int i : l) {
        if (seen.count(-i) > 0) {
            return true;
        }
        seen.insert(i);
    }
    return false;
}