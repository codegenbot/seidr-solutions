#include <vector>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end()); 
    for (int i : s) { 
        if (s.count(-i)) return true;
    }
    return false;
}