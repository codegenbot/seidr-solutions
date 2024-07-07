```cpp
int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None for the problem description
    vector<int> v = lst;
    sort(v.begin(), v.end());
    if (v.size() < 2) return -1; // None for the problem description
    return v[1];
}