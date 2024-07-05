#include <vector>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        int target = -*it; 
        set<int>::iterator findIt;
        bool found = false;
        for (findIt = s.begin(); findIt != s.end(); ++findIt) {
            if (*findIt > target && s.find(target + *findIt) != s.end()) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}