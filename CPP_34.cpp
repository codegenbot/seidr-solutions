```cpp
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), end(unique_copy(l.begin(), l.end())));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    if (first == last)
        return first;
    for (vector<int>::iterator i = first; i != last; ++i) {
        if (next(i) != last && *i == *(next(i)))
            continue;
        *first++ = *i;
    }
    return ++first;
}