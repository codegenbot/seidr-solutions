int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // or some other indicator of "none"
    vector<int> v = lst;
    sort(v.begin(),v.end());
    int i=0;
    while(i<v.size()-2 && v[i] == v[i+1])
        i++;
    if(i==v.size()-2) return None; // return -1 or some other indicator of "none"
    return v[i+1];
}