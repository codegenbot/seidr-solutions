int next_smallest(vector<int> lst){
    vector<int> copy = lst;
    if(copy.empty()){
        return -1; // or some value that represents None
    }
    sort(copy.begin(), copy.end());
    copy.erase(unique(copy.begin(), copy.end()), copy.end());
    if(copy.size() < 2){
        return -1; // or some value that represents None
    }
    return copy[1];
}