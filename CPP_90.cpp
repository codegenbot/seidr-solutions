```
int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    if(v.size() < 2) return -1; // Return None if there is no such element.
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    if(v.size() < 2) return -1;
    return *(v.begin()+1);
}