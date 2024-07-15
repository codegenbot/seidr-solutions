#include <set>

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size() - 2; ++i) {
        std::set<int> seen;
        for (int j = i + 1; j < l.size(); ++j) {
            int target = -l[i] - l[j];
            if (seen.count(target)) {
                return true;
            }
            seen.insert(l[j]);
        }
    }
    return false;
}