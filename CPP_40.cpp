#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size() - 2; i++) {
        std::unordered_set<int> seen;
        for (int j = i + 1; j < l.size(); j++) {
            int complement = -l[i] - l[j];
            if (seen.count(complement)) {
                return true;
            }
            seen.insert(l[j]);
        }
    }
    return false;
}