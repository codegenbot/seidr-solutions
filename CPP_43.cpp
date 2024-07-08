#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        if (find(s.begin(), s.end(), -i) != s.end()) {
            return true;
        }
    }
    return false;
}