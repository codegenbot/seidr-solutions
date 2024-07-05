#include <vector>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int target = -s[i];
        int j = 0;
        while (j < i && j < s.size()) {
            if (target + s[j] == s[i]) {
                return true;
            }
            j++;
        }
    }
    return false;
}