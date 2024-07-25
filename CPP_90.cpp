int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None (or -1 in this case)
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size()-1; i++){
        if(sorted[i] != sorted[i+1]) {
            if(i == 0) return sorted[i+1];
            else return sorted[i];
        }
    }
    return -1; // If all elements are the same, or there is only one element
}