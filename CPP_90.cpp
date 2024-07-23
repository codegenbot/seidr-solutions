int next_smallest(vector<int> lst){
    if (lst.size() < 2) {
        return -1;
    }
    
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    int smallest = sorted_lst[0];
    for (int i = 1; i < sorted_lst.size(); i++) {
        if (sorted_lst[i] > smallest) {
            return sorted_lst[i];
        }
    }
    
    return -1;
}