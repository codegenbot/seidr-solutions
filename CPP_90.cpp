int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // or any other value that represents None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size()-1; i++){
        if(sorted[i] < sorted[i+1]){
            return *std::next(sorted.begin(),i);
        }
    }
    return -1; // or any other value that represents None
}