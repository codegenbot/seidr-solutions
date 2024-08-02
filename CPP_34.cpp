#include <algorithm>
#include <vector>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(vector<int>::iterator f, vector<int>::iterator l) {
    sort(f,l);
    auto it = unique(f,l); 
    for(;it!=l;++it)
        *f++ = *it;
    return ++f;
}