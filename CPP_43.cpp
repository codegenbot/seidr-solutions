#include <vector>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<vector<int>> l) {
    set<int> s;
    for (const auto& v : l) {
        for (int i : v) {
            s.insert(i);
        }
    }
    for (auto it = s.begin(); it != s.end(); ++it) { 
        int complement = -(*it);
        if (s.find(complement) != s.end()) {
            return true;
        }
    }
    return false;
}