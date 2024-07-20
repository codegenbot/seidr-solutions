bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            vector<int> dups;
            for(int j = 0; j < lst.size(); j++){
                if(find(dups.begin(), dups.end(), lst[j]) == dups.end()){
                    dups.push_back(lst[j]);
                }
            }
            return false;
        }
    }
    return true;
}