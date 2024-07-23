int next_smallest(vector<int> lst){
    if(lst.size() < 2)
        return -1;
    
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    int smallest = sorted_lst[0];
    int second_smallest = -1;
    
    for(int num : sorted_lst){
        if(num > smallest){
            second_smallest = num;
            break;
        }
    }
    
    return second_smallest;
}