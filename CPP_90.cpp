int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    
    vector<int> unique_lst = lst;
    sort(unique_lst.begin(), unique_lst.end());
    unique_lst.erase(unique(unique_lst.begin(), unique_lst.end()), unique_lst.end());
    
    if(unique_lst.size() < 2){
        return -1;
    }
    
    return unique_lst[1];
}