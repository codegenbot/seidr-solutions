#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    unordered_set<int> seen;
    for (auto it = first; it != last; ++it) {
        if (!seen.insert(*it).second)
            *it = 0;
    }
    return first + distance(first, last);
}