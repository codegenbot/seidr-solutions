int next_smallest(vector<int> lst) {
    vector<int> v = lst; 
    if (v.empty()) return 0; //return None
    sort(v.begin(), v.end());
    for(int i=1; i<v.size(); i++){
        if(v[i] != v[0]){
            return v[i];
        }
    }
    return 0; // return None if all elements are same
}