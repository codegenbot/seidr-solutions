#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::unordered_set<int> seen;

    for (int num : l) {
        if (seen.count(-num)) {
            return true;
        }
        seen.insert(num);
    }

    return false;
}