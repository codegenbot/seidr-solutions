Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> duplicates;
            for(int j = i + 1; j < lst.size(); j++){
                if(lst[j] == lst[i]){
                    duplicates.push_back(lst[j]);
                } else {
                    break;
                }
            }
            if(duplicates.size() > 1){
                return false;
            }
        }
    }
    return true;
}