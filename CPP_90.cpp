int next_smallest(vector<int> lst){
    if(lst.size() < 2)
        return None;
    
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    int smallest = sorted_lst[0];
    for(int num : sorted_lst){
        if(num > smallest)
            return num;
    }
    
    return None;
}