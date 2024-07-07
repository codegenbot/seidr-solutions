#include <set>
#include <vector>

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.rbegin(), l.rend()); 
    for (int i = 0; i < l.size(); i++) {
        int complement = -s[i];
        if (find(s.begin(), s.end(), complement) != s.end()) {
            return true;
        }
    }
    return false;
}