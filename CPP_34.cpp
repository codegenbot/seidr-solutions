#include <algorithm>

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique(vector<int>::iterator start, vector<int>::iterator end) {
    sort(start, end);
    auto it = unique_copy(start, end, start);
    return it;
}