#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    sort(first, last);
    auto it = unique_copy(first, last);
    while (it != last) {
        *first = *it;
        ++first;
        ++it;
    }
    return ++it;
}