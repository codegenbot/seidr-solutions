#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    map<int, bool> seen;
    for (auto it = first; it != last; ++it) {
        if (!seen.count(*it)) {
            *it = make_pair(*it, true);
        }
    }
    return seen.begin(), seen.end();
}