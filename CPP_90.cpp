int next_smallest(vector<int> lst) {
    if(lst.size() < 2)
        return -1; // or some other value that indicates "None" in this case
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i] != v[i+1])
            return v[i];
    }
    return -1; // or some other value that indicates "None"
}