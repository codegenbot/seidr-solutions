#include <unordered_set>

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> s;
    for (int i = 0; i < l.size(); i++) {
        if (s.find(-l[i]) != s.end()) {
            return true;
        }
        s.insert(l[i]);
    }
    return false;
}