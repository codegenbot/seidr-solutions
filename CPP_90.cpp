int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None if there are less than 2 elements
    vector<int> vec(lst);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size()-1; i++) {
        if(vec[i] != vec[i+1]) return vec[i+1]; 
    }
    return -1;
}