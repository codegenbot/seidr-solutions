#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int a : s) {
        for (int b : s) {
            if (s.count(-a - b)) return true;
        }
    }
    return false;
}