#include <unordered_set>

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.find(-num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}