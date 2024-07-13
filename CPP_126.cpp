Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
        bool found = false;
        for(int j = 0; j < i; j++){
            if(lst[i] == lst[j]){
                found = true;
                break;
            }
        }
        if(!found){
            return false;
        }
    }
    return true;
}