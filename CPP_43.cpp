#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    vector<int> v(l.begin(), l.end());
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        int complement = -v[i];
        auto it = upper_bound(v.begin() + i, v.end(), complement);
        if (it != v.end() && *it == complement) {
            return true;
        }
    }

    return false;
}