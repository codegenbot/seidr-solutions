#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        int j = -i;
        if (s.find(j) != s.end()) {
            for (int k : s) {
                if ((k == i || k == j) && k * 2 == 0)
                    continue;
                if (k + i + j == 0)
                    return true;
            }
        }
    }
    return false;
}