int next_smallest(vector<int> lst) {
    vector<int> copy = lst;
    if(copy.size() < 2) return -1; // or some other value to indicate None
    
    sort(copy.begin(), copy.end());
    
    for(int i=0; i<copy.size()-1; i++) {
        if(copy[i] != copy[i+1]) {
            return copy[i+1];
        }
    }
    
    return -1; // or some other value to indicate None
}