#include <algorithm>

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> s(l.begin(), l.end());
    for (int num : s) {
        int complement = -num;
        if (s.find(complement) != s.end() && num != complement) {
            return true;
        }
    }
    return false;
}