#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); ++i) {
        int complement = -s[i];
        if (s.find(complement) != s.end() && *s.rbegin() != *s.begin()) {
            return true;
        }
    }
    return false;
}