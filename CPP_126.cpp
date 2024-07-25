bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> duplicates;
            for(int j = 0; j < lst.size(); j++){
                if(lst[j] == lst[i] || lst[j] == lst[i-1]){
                    duplicates.push_back(lst[j]);
                }
            }
            if(duplicates.size() > 1){
                return false;
            }
        }
    }
    return true;
}