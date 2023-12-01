bool is_sorted(vector<int> lst){
    int n = lst.size();
    if(n <= 1) {
        return true;
    }
    for(int i = 0; i < n - 1; i++) {
        if(lst[i] >= lst[i+1]) {
            return false;
        }
    }
    return true;
}