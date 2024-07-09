#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto i = next(s.begin()); i != s.end(); ++i) {
        int complement = -*i;
        if (find(cbegin(s), cend(s), complement) != cend(s)) {
            return true;
        }
    }
    return false;
}