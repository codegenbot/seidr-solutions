```
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int i = 0; i < l.size(); ++i) {
        s.insert(l[i]);
    }
    for (int i = 0; i < s.size(); ++i) {
        int target = -s[i];
        if (find(s.begin(), s.end(), target) != s.end()) {
            int left = -target - s[i];
            if (find(s.begin(), s.end(), left) != s.end() && left != s[i]) {
                return true;
            }
        }
    }
    return false;
}