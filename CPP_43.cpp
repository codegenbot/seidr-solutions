#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> s(l.begin(), l.end());
    for (int x : s) {
        if (s.find(-x) != s.end()) {
            return true;
        }
    }
    return false;