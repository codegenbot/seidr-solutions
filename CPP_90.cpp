int next_smallest(vector<int> lst) {
    if(lst.size() < 2)
        return -1; // or any value that represents "None"
    
    vector<int>::iterator it = min_element(lst.begin(), lst.end());
    for(auto i=it+1; i!=lst.end(); ++i){
        if(*i > *it) {
            return *i;
        }
    }
    return -1; // or any value that represents "None"
}