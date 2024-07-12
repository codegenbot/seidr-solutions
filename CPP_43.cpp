#include<vector>
#include<set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::set<int> s(l.begin(), l.end());
    for (auto it = s.begin(); it != s.end(); it++) {
        int target = -(*it);
        if (target != *it && s.find(target) != s.end()) {
            return true;
        }
    }
    return false;
}