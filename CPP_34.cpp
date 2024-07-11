#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    map<int, bool> seen;
    for (auto it = first; it != last; ++it) {
        if (!seen.insert({*it, true}).second)
            *it = 0; // replace with a dummy value
    }
    return first + distance(first, last);
}