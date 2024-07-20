int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // 0 is also fine as per problem description
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i] < v[i+1]) return v[i];
    }
    return -1; // If all elements are equal, then return -1
}