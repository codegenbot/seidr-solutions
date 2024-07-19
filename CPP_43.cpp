#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s = set<int>(l.begin(), l.end()); 
    for (auto it = s.begin(); it != s.end(); ++it) { 
        int complement = -*it;
        if (find(s.begin(), s.end(), complement) != s.end()) {
            return true;
        }
    }
    return false;
}