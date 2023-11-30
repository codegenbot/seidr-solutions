#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    unordered_set<int> nums;
    int n = l.size();
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int sum = l[i] + l[j];
            if (nums.count(-sum) > 0) {
                return true;
            }
        }
        nums.insert(l[i]);
    }
    
    return false;
}