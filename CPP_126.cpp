Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    bool firstOccur = true;
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]){
            if(firstOccur){
                firstOccur = false;
            } else {
                return false;
            }
        }
    }
    return true;
}