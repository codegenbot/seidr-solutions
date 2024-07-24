#include <vector>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end()); 
    for (auto i = s.begin(); i != s.end(); i++) {
        int complement = -*i;
        if (find(i + 1, s.end(), complement) != s.end()) {
            return true;
        }
    }
    return false;
}