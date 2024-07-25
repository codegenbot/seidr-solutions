int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; 
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    if(lst.size() < 2) return -1;
    return *next(cmin_element(lst.begin(), lst.end()));
}