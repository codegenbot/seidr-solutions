#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator b, iterator e) {
    sort(b, e);
    iterator it = unique_copy(b, e);
    while (it != e) {
        *it++;
        for (; it != e && *it == *(it-1); ++it);
    }
    return it;
}