#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int x : l) {
        int complement = -x;
        if (s.find(complement) != s.end()) {
            return true;
        }
        s.insert(x);
    }
    return false;
}