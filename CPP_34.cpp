#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    if (first == last)
        return first;
    iterator i = first + 1;
    for (; i != last; ++i) {
        if (*i != *--first) {
            *++first = *i;
        }
    }
    return ++first;
}