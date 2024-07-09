Here is the solution:

int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size(); i++){
        if(i==0) continue;
        if(binary_search(sorted.begin(), sorted.end(), sorted[i-1]) == sorted.end()){
            return sorted[i];
        }
    }
    return -1; // Return None
}