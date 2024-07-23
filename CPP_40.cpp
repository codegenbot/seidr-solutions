#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int target = -s[i];
        bool found = false;
        for (int j = i + 1; j < s.size(); j++) {
            if (s.find(target - s[j]) != s.end()) {
                found = true;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}