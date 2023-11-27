bool is_sorted(vector<int> lst){
    // check for duplicates
    for(int i=0; i<lst.size(); i++){
        if(count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    
    // check for ascending order
    for(int i=1; i<lst.size(); i++){
        if(lst[i] < lst[i-1]){
            return false;
        }
    }
    
    return true;
}