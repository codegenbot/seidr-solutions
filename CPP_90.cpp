Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> vec(lst);
    sort(vec.begin(), vec.end());
    
    if (vec.size() < 2) {
        return -1; // or you can print "None" 
    }
    
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] != vec[0]) {
            return vec[i];
        }
    }
    
    return -1; // or you can print "-1" 
}