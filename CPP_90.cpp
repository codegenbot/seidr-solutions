Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> v(lst);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i] != v[i+1]){
            return v[i+1];
        }
    }
    return -1;
}