int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size(); i++){
        if(sorted[i] != lst[0]){
            return sorted[i];
        }
    }
    return -1; // Return None
}