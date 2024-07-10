bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]){
            if(i == lst.size()-1 || lst[i] > lst[i+1]) return true;
        } else {
            int count = 0;
            for(int j = i; j < lst.size() && lst[j] == lst[i]; j++, count++);
            if(count > 1) return false;
        }
    }
    return false;
}