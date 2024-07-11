Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> v(lst);
    sort(v.begin(), v.end());
    if(v.size() < 2) return -1;
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    if(v.size() < 2) return -1;
    return *(v.begin()+1);
}