```
#include <algorithm>

vector<int> remove_duplicates(vector<int> l) {
    vector<int> result(l.begin(), remove_duplicates(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator remove_duplicates(vector<int>::iterator start, vector<int>::iterator end) {
    sort(start, end);
    auto it = unique_copy(start, end, start);
    return it;
}