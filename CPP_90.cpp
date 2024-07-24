```
int next_smallest(vector<int> lst){
    if (lst.empty()) return -1; // Return None in C++ equivalent to return -1
    vector<int> v(lst);
    sort(v.begin(), v.end());
    auto it = prev(cend(v));
    return *it == begin(v)->begin()->first ? -1 : *it;
}