#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        int target = -i;
        for (int j : s) {
            if (j == i || j > target) break;
            if (target + j == 0) return true;
        }
    }
    return false;
}