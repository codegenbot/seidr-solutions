bool is_sorted(vector<int> lst){
    if(lst.size() <= 1)
        return true;
    
    int prev = lst[0];
    int duplicateCount = 0;
    
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < prev){
            return false;
        }
        else if(lst[i] == prev){
            duplicateCount++;
            if(duplicateCount > 1){
                return false;
            }
        }
        else{
            prev = lst[i];
            duplicateCount = 0;
        }
    }
    
    return true;
}