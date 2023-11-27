int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return None;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int next_smallest = lst[1];
    
    if(smallest == next_smallest){
        return None;
    }
    
    return next_smallest;
}