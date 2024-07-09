#include <set>
#include <vector>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s;
    for (int i : l) {
        s.insert(i);
    }
    auto it = s.begin();
    while (it != s.end()) { 
        int complement = -*it;
        if (find(it, s.end(), complement) != it) {
            return true;
        }
        ++it;
    }
    return false;
}