#include <vector>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int a : s) {
        int target = -a;
        if (target != a && find(s.begin(), s.end(), target) != s.end()) {
            return true;
        }
    }
    return false;
}