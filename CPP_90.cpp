int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    if (copy.size() < 2) return -1; // Return None
    for(int i=0; i<copy.size()-1; i++){
        if(copy[i] < copy[i+1]) return copy[i+1];
    }
    return -1; // Return None
}