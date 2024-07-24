#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int target = -s[i];
        if (target != s[i] && find(s.begin() + i + 1, s.end(), target) != s.end()) {
            return true;
        }
    }
    return false;
}