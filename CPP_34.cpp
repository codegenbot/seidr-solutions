#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    if (first == last)
        return first;
    
    sort(first, last);
    auto it = first;
    for (++it; it != last; ++it) {
        if (*it != *(it - 1))
            *first++ = *it;
    }
    return ++first;
}