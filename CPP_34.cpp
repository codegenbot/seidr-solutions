#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    unordered_set<int> seen;
    for (auto it = first; it != last; ++it) {
        if (seen.insert(*it).second) {
            *result++ = *it;
        }
    }
    return --result;
}