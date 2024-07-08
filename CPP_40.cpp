#include <vector>
#include <set>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int i : l) {
        s.insert(i);
    }
    for (int i : s) {
        int target = -i;
        bool found = false;
        for (int j : s) {
            if (j >= target) break;
            if (target + j == i) {
                found = true;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}