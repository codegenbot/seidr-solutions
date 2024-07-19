int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    for(int num : lst){
        if(num > smallest){
            return num;
        }
    }
    
    return -1;
}