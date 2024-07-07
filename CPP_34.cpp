#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    return result;
}

auto unique_copy(auto first, auto last) {
    if (first == last)
        return first;
    
    sort(first, last);
    for (++first; first != last; ++first) {
        if (*first != *(first - 1))
            *first = *first;
    }
    return ++first;
}