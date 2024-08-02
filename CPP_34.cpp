#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator f, iterator l) {
    sort(f,l);
    iterator it = unique(f,l);
    for(;it!=l;++it)
        *f++ = *it;
    return ++f;
}