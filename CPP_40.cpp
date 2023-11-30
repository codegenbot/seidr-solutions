#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    unordered_set<int> nums;

    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            int target = -l[i] - l[j];
            if (nums.count(target) > 0) {
                return true;
            }
        }
        nums.insert(l[i]);
    }

    return false;
}