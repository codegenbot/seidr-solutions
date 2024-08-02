#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::unordered_set<int> seen;
    int zero_count = 0;
    for (int i : l) {
        if (i == 0) {
            if (zero_count >= 1) {
                return true;
            }
            zero_count++;
        } else {
            if (seen.count(-i)) {
                return true;
            }
            seen.insert(i);
        }
    }
    return false;
}