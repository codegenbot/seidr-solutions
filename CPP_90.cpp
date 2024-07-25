Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> v = lst;
    if(v.size() < 2) return -1; // None for empty or single element list
    sort(v.begin(), v.end());
    for(int i=1; i<v.size(); i++){
        if(v[i] != v[0]) {
            return v[i];
        }
    }
    return -1; // None if all elements are the same (first one)
}