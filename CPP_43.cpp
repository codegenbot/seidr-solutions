#include <vector>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int i : l) {
        s.insert(i);
    }
    for (int i : s) {
        if (s.find(-i) != s.end()) {
            return true;
        }
    }
    return false;
}