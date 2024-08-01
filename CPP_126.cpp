bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            int count = 0;
            for(int j = i; j < lst.size() && lst[j] == lst[i]; j++, count++);
            if(count > 1) return false;
        }
    }
    return true;
}