#include <vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int complement = -s[i];
        if (s.find(complement) != s.end() && s.count(s[i]) == 1) {
            return true;
        }
    }
    return false;
}