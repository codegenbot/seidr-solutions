#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator b, iterator e) {
    unordered_set<int> seen;
    for (auto it = b; it != e; ++it) {
        if (seen.insert(*it).second) {
            *result++ = *it;
        }
    }
    return result;
}