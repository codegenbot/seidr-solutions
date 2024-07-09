#include <set>
#include <vector>

using namespace std;

bool pairs_sum_to_zero(vector<vector<int>> l) {
    set<int> s;
    for (const auto& v : l) {
        for (int i : v) {
            s.insert(i);
        }
    }
    for (int i = 0; i != s.end(); i++) { 
        int complement = -s[i];
        if (find(s.begin() + i, s.end(), complement) != s.end()) {
            return true;
        }
    }
    return false;
}