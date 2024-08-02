#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    map<int, bool> m;
    for (auto it = first; it != last; ++it) {
        if (!m.count(*it)) {
            *it = 0;
            m[*it] = true;
        }
    }
    return first + distance(first, last);
}