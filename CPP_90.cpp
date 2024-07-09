int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None (or -1 in this case) if there's no such element.
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size()-1; i++){
        if(sorted[i] != sorted[i+1]){
            return sorted[i+1];
        }
    }
    return -1; // Return None (or -1 in this case) if there is no such element.
}