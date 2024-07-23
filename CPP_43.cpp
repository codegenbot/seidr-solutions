#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) { 
        int complement = -s[i];
        if (find(s.rbegin() + i, s.rend(), complement) != s.rend()) {
            return true;
        }
    }
    return false;
}