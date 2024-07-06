int next_smallest(vector<int> lst) {
    #include <vector>
    #include <algorithm>
    vector<int> v = lst;
    sort(v.begin(), v.end());
    if (v.size() < 2) return -1; 
    return v[1];
}