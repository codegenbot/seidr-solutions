```cpp
#include <vector>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        int target = -*it;
        bool found = false;
        for (set<int>::iterator j = s.begin(); j != s.end(); ++j) {
            if (*j < *it && target + *j == *it) {
                found = true;
                break;
            }
        }
        if (!found) continue;
        for (set<int>::iterator k = s.begin(); k != s.end(); ++k) {
            if (*k < *it && *k < *j && target + *k == 0) {
                return true;
            }
        }
    }
    return false;
}