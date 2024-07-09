#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    unordered_map<int, bool> seen;
    for (; first != last; ++first) {
        if (!seen.count(*first)) {
            *seen.insert(make_pair(*first, true)).first = *first;
        }
    }
    return first;
}