Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> v = lst; // to avoid modifying original vector
    if(v.size() < 2) return -1; // or any other value that indicates no such element
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < (v.size()-1); i++){
        if(v[i] != v[v.size()-1]){
            return v[i+1];
        }
    }
    
    return -1;
}