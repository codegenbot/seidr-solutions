bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> v(lst.begin(), lst.end());
            sort(v.begin(), v.end());
            return false;
        }
    }
    return true;
}