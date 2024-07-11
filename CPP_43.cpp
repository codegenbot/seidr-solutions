#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_set>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> complements;
    for (int num : l) {
        if (complements.count(-num)) {
            return true;
        }
        complements.insert(num);
    }
    return false;
}