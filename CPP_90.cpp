int next_smallest(vector<int> lst){
    vector<int> v = lst;
    sort(v.begin(), v.end());
    if(v.size() < 2) return -1; // or any other value that represents None
    return v[1];
}