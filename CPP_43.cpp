#include <vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int num : s) {
        if (s.find(-num) != s.end()) return true;
    }
    return false;
}