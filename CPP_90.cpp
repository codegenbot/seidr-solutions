int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // Return None as per problem statement
    vector<int> v = lst;
    sort(v.begin(), v.end());
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(count == 1) break;
        for(int j=i+1; j<v.size(); j++){
            if(v[i] > v[j]){
                return v[i];
                count = 1;
                break;
            }
        }
    }
    return -1; // Return None as per problem statement
}