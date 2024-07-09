Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() < 2) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> duplicates;
            for(int j = 0; j < i; j++){
                if(find(duplicates.begin(), duplicates.end(), lst[j]) == duplicates.end()){
                    duplicates.push_back(lst[j]);
                }
            }
            if(duplicates.size() > 1) return false;
        } else {
            return false;
        }
    }
    return true;
}