#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::unordered_set<int> seen;
    int zeroCount = 0;
    
    for (int i : l) {
        if (i == 0) {
            zeroCount++;
            if (zeroCount >= 2) {
                return true;
            }
        } else if (seen.count(-i)) {
            return true;
        }
        seen.insert(i);
    }
    return false;
}