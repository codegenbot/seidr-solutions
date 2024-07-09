#include <vector>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int i : l) {
        if (s.find(-i) != s.end()) {
            return true;
        }
        s.insert(i);
    }
    return false;
}