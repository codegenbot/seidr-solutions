#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> seen;

    for (int num : l) {
        if (seen.count(-num)) {
            return true;
        }
        seen.insert(num);
    }

    return false;
}