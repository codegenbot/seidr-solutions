int next_smallest(vector<int> lst){
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i=1; i<v.size(); i++){
        if(v[i-1] != v[i]){
            return v[i];
        }
    }
    return -1; // Return None as per problem description
}