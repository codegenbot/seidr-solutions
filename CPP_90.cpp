int next_smallest(vector<int> lst){
    if(lst.size() < 2)
        return -1;
    
    vector<int> unique_lst(lst.begin(), lst.end());
    sort(unique_lst.begin(), unique_lst.end());
    
    int smallest = unique_lst[0];
    for(int num : unique_lst){
        if(num > smallest)
            return num;
    }
    
    return -1;
}