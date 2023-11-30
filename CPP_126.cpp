bool is_sorted(vector<int> lst){
    int n = lst.size();
    if(n <= 1){
        return true;
    }
    for(int i = 1; i < n; i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}