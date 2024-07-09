#include <vector>
#include <set>

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end()); 
    for (int i = 0; i < s.size(); i++) { 
        int complement = -s[i];
        auto it = s.find(complement);
        if (it != s.end() && it != s.begin()) {
            return true;
        }
    }
    return false;
}