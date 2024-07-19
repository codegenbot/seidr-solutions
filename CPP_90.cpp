int next_smallest(vector<int> lst) {
    if(lst.size() < 2) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < (sorted.size()-1); i++) {
        if(sorted[i] != sorted[i+1]) {
            if(i == (sorted.size() -2)) return sorted[i+1]; // Return the second smallest number
            else return sorted[i+1];
        }
    }
    return -1; // Return None
}