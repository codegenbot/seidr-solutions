int next_smallest(vector<int> lst){
    vector<int> copy = lst;
    if(copy.empty()) return -1; // None in Python's sense
    sort(copy.begin(), copy.end());
    for(int i=0; i<copy.size()-1; i++){
        if(copy[i] < copy[i+1]) {
            if(i == 0) return copy[i+1];
            else return copy[i];
        }
    }
    return -1; // None in Python's sense
}