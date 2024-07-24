bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> dup;
            for(int j = 0; j < lst.size(); j++){
                if(find(dup.begin(), dup.end(), lst[j]) == dup.end()){
                    dup.push_back(lst[j]);
                } else {
                    return false;
                }
            }
            return true;
        }
    }
    return true;
}