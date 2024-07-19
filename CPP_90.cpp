int next_smallest(vector<int> lst){
    if (lst.size() < 2) {
        return -1;
    }
    
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    int smallest = sorted_lst[0];
    int second_smallest = sorted_lst[1];
    
    if (smallest == second_smallest) {
        return -1;
    }
    
    return second_smallest;
}