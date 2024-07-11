#include <iostream>
#include <vector>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> complements;

    for (int num : l) {
        if (complements.find(-num) != complements.end()) {
            return true;
        }
        complements.insert(num);
    }

    return false;
}