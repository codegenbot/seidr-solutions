Here is the solution:

int next_smallest(vector<int> lst) {
    vector<int> v(lst);
    if(v.size() < 2)
        return -1;
    sort(v.begin(),v.end());
    for(int i = 1; i < v.size(); i++){
        if(v[i] != v[0])
            return v[i];
    }
    return -1;
}