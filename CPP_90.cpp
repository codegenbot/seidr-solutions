Here is the completed code:

int next_smallest(vector<int> lst){
    if(lst.empty()) return 0; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=1;i<sorted.size();i++){
        if(sorted[0] != sorted[i])
            return sorted[i];
    }
    return 0; // Return None
}