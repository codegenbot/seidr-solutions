#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        int target = -i;
        bool found = false;
        for (int j : s) {
            if (j == target) continue;
            if (target + j == i) {
                found = true;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}