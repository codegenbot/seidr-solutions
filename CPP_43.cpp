#include <vector>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < l.size(); i++) {
        int complement = -l[i];
        if (find(l.begin() + i + 1, l.end(), complement) != l.end()) {
            return true;
        }
    }
    return false;
}