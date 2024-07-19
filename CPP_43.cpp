#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int i = 0; i < l.size(); i++) {
        int complement = -l[i];
        if (s.find(complement) != s.end() && l[i] != complement) {
            return true;
        }
        s.insert(l[i]);
    }
    return false;
}