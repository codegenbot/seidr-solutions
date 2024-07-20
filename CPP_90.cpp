Here is the solution:

int next_smallest(vector<int> lst){
    if(lst.empty()) return NULL; // Return None (or NULL) if there is no such element.
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); i++){
        if(v[i] != v[0]){
            return v[i];
        }
    }
    return NULL; // Return None (or NULL) if there is no such element.
}