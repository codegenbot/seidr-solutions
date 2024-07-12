#include<vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto i = s.begin(); i != s.end(); ++i) {
        int target = -*i;
        if (*i != target && count(s.begin(), s.end(), target)) {
            return true;
        }
    }
    return false;
}